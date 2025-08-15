package com.shank.springanalytics.cli;

import com.shank.springanalytics.model.DataRecord;
import com.shank.springanalytics.service.DataRecordService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.boot.CommandLineRunner;
import org.springframework.stereotype.Component;

import java.util.List;

@Component
public class DataRecordCliRunner implements CommandLineRunner {

    @Autowired
    private DataRecordService service;

    @Override
    public void run(String... args) throws Exception {
        System.out.println("\n" + "=".repeat(80));
        System.out.println("CRUDE OIL PRODUCTION DATA ANALYSIS");
        System.out.println("=".repeat(80));
        
        // Load all records
        List<DataRecord> records = service.getAllRecords();
        
        // Display basic statistics
        service.printBasicStats(records);
        
        // Uncomment the following section if you want to see all records
        /*
        System.out.println("\n" + "-".repeat(80));
        System.out.println("DETAILED RECORDS");
        System.out.println("-".repeat(80));
        for (DataRecord record : records) {
            System.out.println(record);
        }
        */
        
        System.out.println("\nAnalysis complete. Exiting application.");
    }
}