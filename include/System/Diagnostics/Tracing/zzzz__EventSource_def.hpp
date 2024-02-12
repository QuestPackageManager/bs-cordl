#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
struct __EventSource__EventData;
}
namespace System {
struct Guid;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Diagnostics::Tracing {
class EventSource;
}
namespace System::Diagnostics::Tracing {
struct __EventSource__EventData;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::Tracing::EventSource);
MARK_VAL_T(::System::Diagnostics::Tracing::__EventSource__EventData);
// Type: ::EventData
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Diagnostics::Tracing {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2603))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3744))
// CS Name: ::EventSource::EventData
struct CORDL_TYPE __EventSource__EventData {
public:
  // Declarations
  __declspec(property(put = set_DataPointer)) void* DataPointer;

  __declspec(property(put = set_Size)) int32_t Size;

  __declspec(property(put = set_Reserved)) int32_t Reserved;

  /// @brief Method set_DataPointer, addr 0x259edf4, size 0x8, virtual false, abstract: false, final false
  inline void set_DataPointer(void* value);

  /// @brief Method set_Size, addr 0x259edfc, size 0x8, virtual false, abstract: false, final false
  inline void set_Size(int32_t value);

  /// @brief Method set_Reserved, addr 0x259ee04, size 0x8, virtual false, abstract: false, final false
  inline void set_Reserved(int32_t value);

  // Ctor Parameters [CppParam { name: "_DataPointer_k__BackingField", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "_Size_k__BackingField", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "_Reserved_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __EventSource__EventData(void* _DataPointer_k__BackingField, int32_t _Size_k__BackingField, int32_t _Reserved_k__BackingField) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __EventSource__EventData();

  /// @brief Field <DataPointer>k__BackingField, offset: 0x0, size: 0x8, def value: None
  void* _DataPointer_k__BackingField;

  /// @brief Field <Size>k__BackingField, offset: 0x8, size: 0x4, def value: None
  int32_t _Size_k__BackingField;

  /// @brief Field <Reserved>k__BackingField, offset: 0xc, size: 0x4, def value: None
  int32_t _Reserved_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::Tracing::__EventSource__EventData, 0x10>, "Size mismatch!");

static_assert(offsetof(::System::Diagnostics::Tracing::__EventSource__EventData, _DataPointer_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Tracing::__EventSource__EventData, _Size_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Tracing::__EventSource__EventData, _Reserved_k__BackingField) == 0xc, "Offset mismatch!");

} // namespace System::Diagnostics::Tracing
// Type: System.Diagnostics.Tracing::EventSource
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Diagnostics::Tracing {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3745))
// CS Name: ::System.Diagnostics.Tracing::EventSource*
class CORDL_TYPE EventSource : public ::System::Object {
public:
  // Declarations
  using EventData = ::System::Diagnostics::Tracing::__EventSource__EventData;

  /// @brief Field <Name>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField))::StringW _Name_k__BackingField;

  __declspec(property(put = set_Name))::StringW Name;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  static inline ::System::Diagnostics::Tracing::EventSource* New_ctor();

  /// @brief Method .ctor, addr 0x259e7fc, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Diagnostics::Tracing::EventSource* New_ctor(::StringW eventSourceName);

  /// @brief Method .ctor, addr 0x259e838, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW eventSourceName);

  static inline ::System::Diagnostics::Tracing::EventSource* New_ctor(::System::Guid eventSourceGuid, ::StringW eventSourceName);

  /// @brief Method .ctor, addr 0x259e860, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Guid eventSourceGuid, ::StringW eventSourceName);

  /// @brief Method Finalize, addr 0x259e888, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method set_Name, addr 0x259e928, size 0x8, virtual false, abstract: false, final false
  inline void set_Name(::StringW value);

  /// @brief Method IsEnabled, addr 0x259e930, size 0x8, virtual false, abstract: false, final false
  inline bool IsEnabled();

  /// @brief Method IsEnabled, addr 0x259e938, size 0x8, virtual false, abstract: false, final false
  inline bool IsEnabled(::System::Diagnostics::Tracing::EventLevel level, ::System::Diagnostics::Tracing::EventKeywords keywords);

  /// @brief Method Dispose, addr 0x259e940, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x259e9ac, size 0x4, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method WriteEvent, addr 0x259e9b0, size 0x44, virtual false, abstract: false, final false
  inline void WriteEvent(int32_t eventId);

  /// @brief Method WriteEvent, addr 0x259e9f8, size 0xbc, virtual false, abstract: false, final false
  inline void WriteEvent(int32_t eventId, int32_t arg1);

  /// @brief Method WriteEvent, addr 0x259eab4, size 0x104, virtual false, abstract: false, final false
  inline void WriteEvent(int32_t eventId, int32_t arg1, int32_t arg2);

  /// @brief Method WriteEvent, addr 0x259ebb8, size 0x14c, virtual false, abstract: false, final false
  inline void WriteEvent(int32_t eventId, int32_t arg1, int32_t arg2, int32_t arg3);

  /// @brief Method WriteEvent, addr 0x259e9f4, size 0x4, virtual false, abstract: false, final false
  inline void WriteEvent(int32_t eventId, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method WriteEvent, addr 0x259ed04, size 0xec, virtual false, abstract: false, final false
  inline void WriteEvent(int32_t eventId, ::StringW arg1, ::StringW arg2, ::StringW arg3);

  /// @brief Method WriteEventCore, addr 0x259edf0, size 0x4, virtual false, abstract: false, final false
  inline void WriteEventCore(int32_t eventId, int32_t eventDataCount, ::cordl_internals::Ptr<::System::Diagnostics::Tracing::__EventSource__EventData> data);

  // Ctor Parameters [CppParam { name: "", ty: "EventSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventSource(EventSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventSource(EventSource const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventSource();

public:
  /// @brief Field <Name>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::Tracing::EventSource, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Diagnostics::Tracing::EventSource, ____Name_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace System::Diagnostics::Tracing
NEED_NO_BOX(::System::Diagnostics::Tracing::EventSource);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Tracing::EventSource*, "System.Diagnostics.Tracing", "EventSource");
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Tracing::__EventSource__EventData, "System.Diagnostics.Tracing", "EventSource/EventData");
