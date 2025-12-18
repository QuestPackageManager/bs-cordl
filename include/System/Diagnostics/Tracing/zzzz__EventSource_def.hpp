#pragma once
// IWYU pragma private; include "System/Diagnostics/Tracing/EventSource.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventSource)
namespace System::Diagnostics::Tracing {
struct EventKeywords;
}
namespace System::Diagnostics::Tracing {
struct EventLevel;
}
namespace System::Diagnostics::Tracing {
struct EventSource_EventData;
}
namespace System {
struct Guid;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Diagnostics::Tracing {
class EventSource;
}
namespace System::Diagnostics::Tracing {
struct EventSource_EventData;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::Tracing::EventSource);
MARK_VAL_T(::System::Diagnostics::Tracing::EventSource_EventData);
// Dependencies System.IntPtr
namespace System::Diagnostics::Tracing {
// Is value type: true
// CS Name: System.Diagnostics.Tracing.EventSource/EventData
struct CORDL_TYPE EventSource_EventData {
public:
  // Declarations
  __declspec(property(put = set_DataPointer)) ::System::IntPtr DataPointer;

  __declspec(property(put = set_Reserved)) int32_t Reserved;

  __declspec(property(put = set_Size)) int32_t Size;

  /// @brief Method set_DataPointer, addr 0x5a32f64, size 0x8, virtual false, abstract: false, final false
  inline void set_DataPointer(::System::IntPtr value);

  /// @brief Method set_Reserved, addr 0x5a32f74, size 0x8, virtual false, abstract: false, final false
  inline void set_Reserved(int32_t value);

  /// @brief Method set_Size, addr 0x5a32f6c, size 0x8, virtual false, abstract: false, final false
  inline void set_Size(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr EventSource_EventData();

  // Ctor Parameters [CppParam { name: "_DataPointer_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "_Size_k__BackingField", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "_Reserved_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EventSource_EventData(::System::IntPtr _DataPointer_k__BackingField, int32_t _Size_k__BackingField, int32_t _Reserved_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3673 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field <DataPointer>k__BackingField, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr _DataPointer_k__BackingField;

  /// @brief Field <Size>k__BackingField, offset: 0x8, size: 0x4, def value: None
  int32_t _Size_k__BackingField;

  /// @brief Field <Reserved>k__BackingField, offset: 0xc, size: 0x4, def value: None
  int32_t _Reserved_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Diagnostics::Tracing::EventSource_EventData, _DataPointer_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Tracing::EventSource_EventData, _Size_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Tracing::EventSource_EventData, _Reserved_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Diagnostics::Tracing::EventSource_EventData, 0x10>, "Size mismatch!");

} // namespace System::Diagnostics::Tracing
// Dependencies System.Object
namespace System::Diagnostics::Tracing {
// Is value type: false
// CS Name: System.Diagnostics.Tracing.EventSource
class CORDL_TYPE EventSource : public ::System::Object {
public:
  // Declarations
  using EventData = ::System::Diagnostics::Tracing::EventSource_EventData;

  __declspec(property(put = set_Name)) ::StringW Name;

  /// @brief Field <Name>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x5a328bc, size 0x70, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x5a3292c, size 0x4, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x5a32854, size 0x50, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method IsEnabled, addr 0x5a328ac, size 0x8, virtual false, abstract: false, final false
  inline bool IsEnabled();

  /// @brief Method IsEnabled, addr 0x5a328b4, size 0x8, virtual false, abstract: false, final false
  inline bool IsEnabled(::System::Diagnostics::Tracing::EventLevel level, ::System::Diagnostics::Tracing::EventKeywords keywords);

  static inline ::System::Diagnostics::Tracing::EventSource* New_ctor();

  static inline ::System::Diagnostics::Tracing::EventSource* New_ctor(::System::Guid eventSourceGuid, ::StringW eventSourceName);

  static inline ::System::Diagnostics::Tracing::EventSource* New_ctor(::StringW eventSourceName);

  /// @brief Method WriteEvent, addr 0x5a32930, size 0x48, virtual false, abstract: false, final false
  inline void WriteEvent(int32_t eventId);

  /// @brief Method WriteEvent, addr 0x5a32a2c, size 0x90, virtual false, abstract: false, final false
  inline void WriteEvent(int32_t eventId, ::StringW arg1);

  /// @brief Method WriteEvent, addr 0x5a32e70, size 0xf0, virtual false, abstract: false, final false
  inline void WriteEvent(int32_t eventId, ::StringW arg1, ::StringW arg2, ::StringW arg3);

  /// @brief Method WriteEvent, addr 0x5a3297c, size 0xb0, virtual false, abstract: false, final false
  inline void WriteEvent(int32_t eventId, int32_t arg1);

  /// @brief Method WriteEvent, addr 0x5a32abc, size 0xf0, virtual false, abstract: false, final false
  inline void WriteEvent(int32_t eventId, int32_t arg1, int32_t arg2);

  /// @brief Method WriteEvent, addr 0x5a32bac, size 0x138, virtual false, abstract: false, final false
  inline void WriteEvent(int32_t eventId, int32_t arg1, int32_t arg2, int32_t arg3);

  /// @brief Method WriteEvent, addr 0x5a32ce4, size 0xb0, virtual false, abstract: false, final false
  inline void WriteEvent(int32_t eventId, int64_t arg1);

  /// @brief Method WriteEvent, addr 0x5a32d94, size 0xdc, virtual false, abstract: false, final false
  inline void WriteEvent(int32_t eventId, int64_t arg1, ::StringW arg2);

  /// @brief Method WriteEvent, addr 0x5a32978, size 0x4, virtual false, abstract: false, final false
  inline void WriteEvent(int32_t eventId, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method WriteEventCore, addr 0x5a32f60, size 0x4, virtual false, abstract: false, final false
  inline void WriteEventCore(int32_t eventId, int32_t eventDataCount, ::System::Diagnostics::Tracing::EventSource_EventData* data);

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x5a32810, size 0x34, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x5a3284c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Guid eventSourceGuid, ::StringW eventSourceName);

  /// @brief Method .ctor, addr 0x5a32844, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW eventSourceName);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_Name, addr 0x5a328a4, size 0x8, virtual false, abstract: false, final false
  inline void set_Name(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventSource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventSource(EventSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventSource(EventSource const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3674 };

  /// @brief Field <Name>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Diagnostics::Tracing::EventSource, ____Name_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Diagnostics::Tracing::EventSource, 0x18>, "Size mismatch!");

} // namespace System::Diagnostics::Tracing
NEED_NO_BOX(::System::Diagnostics::Tracing::EventSource);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Tracing::EventSource*, "System.Diagnostics.Tracing", "EventSource");
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Tracing::EventSource_EventData, "System.Diagnostics.Tracing", "EventSource/EventData");
