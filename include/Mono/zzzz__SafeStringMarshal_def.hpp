#pragma once
// IWYU pragma private; include "Mono/SafeStringMarshal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SafeStringMarshal)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Mono {
struct SafeStringMarshal;
}
// Write type traits
MARK_VAL_T(::Mono::SafeStringMarshal);
// Dependencies System.IDisposable, System.IntPtr
namespace Mono {
// Is value type: true
// CS Name: Mono.SafeStringMarshal
struct CORDL_TYPE SafeStringMarshal {
public:
  // Declarations
  __declspec(property(get = get_Value)) ::System::IntPtr Value;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x3c55dc4, size 0x30, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GFree, addr 0x3c55d78, size 0x4, virtual false, abstract: false, final false
  static inline void GFree(::System::IntPtr ptr);

  /// @brief Method StringToUtf8, addr 0x3c55d60, size 0x18, virtual false, abstract: false, final false
  static inline ::System::IntPtr StringToUtf8(::StringW str);

  /// @brief Method StringToUtf8_icall, addr 0x3c55d5c, size 0x4, virtual false, abstract: false, final false
  static inline ::System::IntPtr StringToUtf8_icall(::ByRef<::StringW> str);

  /// @brief Method .ctor, addr 0x3c55b90, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW str);

  /// @brief Method get_Value, addr 0x3c55d7c, size 0x48, virtual false, abstract: false, final false
  inline ::System::IntPtr get_Value();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SafeStringMarshal();

  // Ctor Parameters [CppParam { name: "str", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "marshaled_string", ty: "::System::IntPtr", modifiers: "", def_value: None }]
  constexpr SafeStringMarshal(::StringW str, ::System::IntPtr marshaled_string) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2249 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field str, offset: 0x0, size: 0x8, def value: None
  ::StringW str;

  /// @brief Field marshaled_string, offset: 0x8, size: 0x8, def value: None
  ::System::IntPtr marshaled_string;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mono::SafeStringMarshal, str) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mono::SafeStringMarshal, marshaled_string) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::SafeStringMarshal, 0x10>, "Size mismatch!");

} // namespace Mono
DEFINE_IL2CPP_ARG_TYPE(::Mono::SafeStringMarshal, "Mono", "SafeStringMarshal");
