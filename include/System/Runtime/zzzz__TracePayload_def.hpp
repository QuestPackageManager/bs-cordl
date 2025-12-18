#pragma once
// IWYU pragma private; include "System/Runtime/TracePayload.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TracePayload)
// Forward declare root types
namespace System::Runtime {
struct TracePayload;
}
// Write type traits
MARK_VAL_T(::System::Runtime::TracePayload);
// Dependencies
namespace System::Runtime {
// Is value type: true
// CS Name: System.Runtime.TracePayload
struct CORDL_TYPE TracePayload {
public:
  // Declarations
  __declspec(property(get = get_AppDomainFriendlyName)) ::StringW AppDomainFriendlyName;

  __declspec(property(get = get_EventSource)) ::StringW EventSource;

  __declspec(property(get = get_ExtendedData)) ::StringW ExtendedData;

  __declspec(property(get = get_SerializedException)) ::StringW SerializedException;

  /// @brief Method .ctor, addr 0x5fd317c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::StringW serializedException, ::StringW eventSource, ::StringW appDomainFriendlyName, ::StringW extendedData, ::StringW hostReference);

  /// @brief Method get_AppDomainFriendlyName, addr 0x5fd319c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_AppDomainFriendlyName();

  /// @brief Method get_EventSource, addr 0x5fd3194, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_EventSource();

  /// @brief Method get_ExtendedData, addr 0x5fd31a4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ExtendedData();

  /// @brief Method get_SerializedException, addr 0x5fd318c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SerializedException();

  // Ctor Parameters []
  // @brief default ctor
  constexpr TracePayload();

  // Ctor Parameters [CppParam { name: "serializedException", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "eventSource", ty: "::StringW", modifiers: "", def_value: None },
  // CppParam { name: "appDomainFriendlyName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "extendedData", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "hostReference", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr TracePayload(::StringW serializedException, ::StringW eventSource, ::StringW appDomainFriendlyName, ::StringW extendedData, ::StringW hostReference) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21118 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field serializedException, offset: 0x0, size: 0x8, def value: None
  ::StringW serializedException;

  /// @brief Field eventSource, offset: 0x8, size: 0x8, def value: None
  ::StringW eventSource;

  /// @brief Field appDomainFriendlyName, offset: 0x10, size: 0x8, def value: None
  ::StringW appDomainFriendlyName;

  /// @brief Field extendedData, offset: 0x18, size: 0x8, def value: None
  ::StringW extendedData;

  /// @brief Field hostReference, offset: 0x20, size: 0x8, def value: None
  ::StringW hostReference;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::TracePayload, serializedException) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::TracePayload, eventSource) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::TracePayload, appDomainFriendlyName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::TracePayload, extendedData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::TracePayload, hostReference) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::TracePayload, 0x28>, "Size mismatch!");

} // namespace System::Runtime
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::TracePayload, "System.Runtime", "TracePayload");
