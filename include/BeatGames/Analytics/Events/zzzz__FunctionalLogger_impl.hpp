#pragma once
// IWYU pragma private; include "BeatGames/Analytics/Events/FunctionalLogger.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatGames/Analytics/Events/zzzz__FunctionalLogger_def.hpp"
inline void BeatGames::Analytics::Events::FunctionalLogger::setStaticF_Navigation(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "Navigation", ::BeatGames::Analytics::Events::FunctionalLogger*>(std::forward<::StringW>(value));
}
inline ::StringW BeatGames::Analytics::Events::FunctionalLogger::getStaticF_Navigation() {
  return ::cordl_internals::getStaticField<::StringW, "Navigation", ::BeatGames::Analytics::Events::FunctionalLogger*>();
}
inline void BeatGames::Analytics::Events::FunctionalLogger::setStaticF_Session(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "Session", ::BeatGames::Analytics::Events::FunctionalLogger*>(std::forward<::StringW>(value));
}
inline ::StringW BeatGames::Analytics::Events::FunctionalLogger::getStaticF_Session() {
  return ::cordl_internals::getStaticField<::StringW, "Session", ::BeatGames::Analytics::Events::FunctionalLogger*>();
}
inline void BeatGames::Analytics::Events::FunctionalLogger::setStaticF_Telemetry(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "Telemetry", ::BeatGames::Analytics::Events::FunctionalLogger*>(std::forward<::StringW>(value));
}
inline ::StringW BeatGames::Analytics::Events::FunctionalLogger::getStaticF_Telemetry() {
  return ::cordl_internals::getStaticField<::StringW, "Telemetry", ::BeatGames::Analytics::Events::FunctionalLogger*>();
}
// Ctor Parameters []
constexpr ::BeatGames::Analytics::Events::FunctionalLogger::FunctionalLogger() {}
