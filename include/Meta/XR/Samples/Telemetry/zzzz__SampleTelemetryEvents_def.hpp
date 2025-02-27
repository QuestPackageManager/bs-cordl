#pragma once
// IWYU pragma private; include "Meta/XR/Samples/Telemetry/SampleTelemetryEvents.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SampleTelemetryEvents)
namespace Meta::XR::Samples::Telemetry {
class SampleTelemetryEvents_AnnotationTypes;
}
namespace Meta::XR::Samples::Telemetry {
class SampleTelemetryEvents_EventTypes;
}
// Forward declare root types
namespace Meta::XR::Samples::Telemetry {
class SampleTelemetryEvents;
}
namespace Meta::XR::Samples::Telemetry {
class SampleTelemetryEvents_AnnotationTypes;
}
namespace Meta::XR::Samples::Telemetry {
class SampleTelemetryEvents_EventTypes;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::Samples::Telemetry::SampleTelemetryEvents);
MARK_REF_PTR_T(::Meta::XR::Samples::Telemetry::SampleTelemetryEvents_AnnotationTypes);
MARK_REF_PTR_T(::Meta::XR::Samples::Telemetry::SampleTelemetryEvents_EventTypes);
// Dependencies System.Object
namespace Meta::XR::Samples::Telemetry {
// Is value type: false
// CS Name: Meta.XR.Samples.Telemetry.SampleTelemetryEvents/EventTypes
class CORDL_TYPE SampleTelemetryEvents_EventTypes : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SampleTelemetryEvents_EventTypes();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SampleTelemetryEvents_EventTypes", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SampleTelemetryEvents_EventTypes(SampleTelemetryEvents_EventTypes&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SampleTelemetryEvents_EventTypes", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SampleTelemetryEvents_EventTypes(SampleTelemetryEvents_EventTypes const&) = delete;

  /// @brief Field Close offset 0xffffffff size 0x4
  static constexpr int32_t Close{ static_cast<int32_t>(0x9b80cf0) };

  /// @brief Field Open offset 0xffffffff size 0x4
  static constexpr int32_t Open{ static_cast<int32_t>(0x9b8072b) };

  /// @brief Field Run offset 0xffffffff size 0x4
  static constexpr int32_t Run{ static_cast<int32_t>(0x9b81f62) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9049 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::Samples::Telemetry::SampleTelemetryEvents_EventTypes, 0x10>, "Size mismatch!");

} // namespace Meta::XR::Samples::Telemetry
// Dependencies System.Object
namespace Meta::XR::Samples::Telemetry {
// Is value type: false
// CS Name: Meta.XR.Samples.Telemetry.SampleTelemetryEvents/AnnotationTypes
class CORDL_TYPE SampleTelemetryEvents_AnnotationTypes : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SampleTelemetryEvents_AnnotationTypes();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SampleTelemetryEvents_AnnotationTypes", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SampleTelemetryEvents_AnnotationTypes(SampleTelemetryEvents_AnnotationTypes&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SampleTelemetryEvents_AnnotationTypes", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SampleTelemetryEvents_AnnotationTypes(SampleTelemetryEvents_AnnotationTypes const&) = delete;

  /// @brief Field BuildTarget offset 0xffffffff size 0x8
  static constexpr ::ConstString BuildTarget{ u"BuildTarget" };

  /// @brief Field InEditor offset 0xffffffff size 0x8
  static constexpr ::ConstString InEditor{ u"InEditor" };

  /// @brief Field RuntimePlatform offset 0xffffffff size 0x8
  static constexpr ::ConstString RuntimePlatform{ u"RuntimePlatform" };

  /// @brief Field Sample offset 0xffffffff size 0x8
  static constexpr ::ConstString Sample{ u"Sample" };

  /// @brief Field TimeSinceEditorStart offset 0xffffffff size 0x8
  static constexpr ::ConstString TimeSinceEditorStart{ u"TimeSinceEditorStart" };

  /// @brief Field TimeSpent offset 0xffffffff size 0x8
  static constexpr ::ConstString TimeSpent{ u"TimeSpent" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9050 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::Samples::Telemetry::SampleTelemetryEvents_AnnotationTypes, 0x10>, "Size mismatch!");

} // namespace Meta::XR::Samples::Telemetry
// Dependencies System.Object
namespace Meta::XR::Samples::Telemetry {
// Is value type: false
// CS Name: Meta.XR.Samples.Telemetry.SampleTelemetryEvents
class CORDL_TYPE SampleTelemetryEvents : public ::System::Object {
public:
  // Declarations
  using AnnotationTypes = ::Meta::XR::Samples::Telemetry::SampleTelemetryEvents_AnnotationTypes;

  using EventTypes = ::Meta::XR::Samples::Telemetry::SampleTelemetryEvents_EventTypes;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SampleTelemetryEvents();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SampleTelemetryEvents", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SampleTelemetryEvents(SampleTelemetryEvents&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SampleTelemetryEvents", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SampleTelemetryEvents(SampleTelemetryEvents const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9051 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::Samples::Telemetry::SampleTelemetryEvents, 0x10>, "Size mismatch!");

} // namespace Meta::XR::Samples::Telemetry
NEED_NO_BOX(::Meta::XR::Samples::Telemetry::SampleTelemetryEvents);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::Samples::Telemetry::SampleTelemetryEvents*, "Meta.XR.Samples.Telemetry", "SampleTelemetryEvents");
NEED_NO_BOX(::Meta::XR::Samples::Telemetry::SampleTelemetryEvents_AnnotationTypes);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::Samples::Telemetry::SampleTelemetryEvents_AnnotationTypes*, "Meta.XR.Samples.Telemetry", "SampleTelemetryEvents/AnnotationTypes");
NEED_NO_BOX(::Meta::XR::Samples::Telemetry::SampleTelemetryEvents_EventTypes);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::Samples::Telemetry::SampleTelemetryEvents_EventTypes*, "Meta.XR.Samples.Telemetry", "SampleTelemetryEvents/EventTypes");
