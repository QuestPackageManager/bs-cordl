#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\ReloadAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReloadAttribute)
namespace UnityEngine::Rendering {
struct ReloadAttribute_Package;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct ReloadAttribute_Package;
}
namespace UnityEngine::Rendering {
class ReloadAttribute;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ReloadAttribute_Package);
MARK_REF_T(::UnityEngine::Rendering::ReloadAttribute*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::ReloadAttribute_Package, "UnityEngine.Rendering", "ReloadAttribute/Package");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::ReloadAttribute*, "UnityEngine.Rendering", "ReloadAttribute");
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ReloadAttribute/Package
struct CORDL_TYPE ReloadAttribute_Package {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ReloadAttribute_Package_Unwrapped
  enum struct __ReloadAttribute_Package_Unwrapped : int32_t {
    __E_Builtin = static_cast<int32_t>(0x0),
    __E_Root = static_cast<int32_t>(0x1),
    __E_BuiltinExtra = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ReloadAttribute_Package_Unwrapped() const noexcept {
    return static_cast<__ReloadAttribute_Package_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ReloadAttribute_Package();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ReloadAttribute_Package(int32_t value__) noexcept;

  /// @brief Field Builtin value: I32(0)
  static ::UnityEngine::Rendering::ReloadAttribute_Package const Builtin;

  /// @brief Field BuiltinExtra value: I32(2)
  static ::UnityEngine::Rendering::ReloadAttribute_Package const BuiltinExtra;

  /// @brief Field Root value: I32(1)
  static ::UnityEngine::Rendering::ReloadAttribute_Package const Root;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11936 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ReloadAttribute_Package, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::ReloadAttribute_Package) == 0x4, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Attribute
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ReloadAttribute
class CORDL_TYPE ReloadAttribute : public ::System::Attribute {
public:
  // Declarations
  using Package = ::UnityEngine::Rendering::ReloadAttribute_Package;

  static inline ::UnityEngine::Rendering::ReloadAttribute* New_ctor(::StringW path, ::UnityEngine::Rendering::ReloadAttribute_Package package);

  static inline ::UnityEngine::Rendering::ReloadAttribute* New_ctor(::StringW pathFormat, int32_t rangeMin, int32_t rangeMax, ::UnityEngine::Rendering::ReloadAttribute_Package package);

  static inline ::UnityEngine::Rendering::ReloadAttribute* New_ctor(::ArrayW<::StringW> paths, ::UnityEngine::Rendering::ReloadAttribute_Package package);

  /// @brief Method .ctor, addr 0x6759280, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW path, ::UnityEngine::Rendering::ReloadAttribute_Package package);

  /// @brief Method .ctor, addr 0x67592e8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::StringW pathFormat, int32_t rangeMin, int32_t rangeMax, ::UnityEngine::Rendering::ReloadAttribute_Package package);

  /// @brief Method .ctor, addr 0x675927c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::StringW> paths, ::UnityEngine::Rendering::ReloadAttribute_Package package);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReloadAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReloadAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReloadAttribute(ReloadAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReloadAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReloadAttribute(ReloadAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11937 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::ReloadAttribute) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering
