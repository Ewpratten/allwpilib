/*----------------------------------------------------------------------------*/
/* Copyright (c) 2008-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include "frc/IterativeRobotBase.h"

namespace frc {

/**
 * IterativeRobot implements the IterativeRobotBase robot program framework.
 *
 * The IterativeRobot class is intended to be subclassed by a user creating a
 * robot program.
 *
 * Periodic() functions from the base class are called each time a new packet is
 * received from the driver station.
 */
class IterativeRobot : public IterativeRobotBase {
 public:
  IterativeRobot();
  virtual ~IterativeRobot() = default;

  /**
   * Provide an alternate "main loop" via StartCompetition().
   *
   * This specific StartCompetition() implements "main loop" behaviour synced
   * with the DS packets.
   */
  void StartCompetition() override;
};

}  // namespace frc
