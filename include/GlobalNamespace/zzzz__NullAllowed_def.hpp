#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NullAllowed_def.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NullAllowed)
namespace System {
class Object;
}
namespace GlobalNamespace {
struct __NullAllowed__Context;
}
// Forward declare root types
namespace GlobalNamespace {
struct __NullAllowed__Context;
}
namespace GlobalNamespace {
class NullAllowed;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__NullAllowed__Context);
MARK_REF_PTR_T(::GlobalNamespace::NullAllowed);
// Type: ::Context
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16096))
// CS Name: ::NullAllowed::Context
struct CORDL_TYPE __NullAllowed__Context {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____NullAllowed__Context_Unwrapped
  enum struct ____NullAllowed__Context_Unwrapped : int32_t {
    __E_Everywhere = static_cast<int32_t>(0x0),
    __E_Prefab = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____NullAllowed__Context_Unwrapped() const noexcept {
    return static_cast<____NullAllowed__Context_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __NullAllowed__Context(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __NullAllowed__Context();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Everywhere value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__NullAllowed__Context const Everywhere;

  /// @brief Field Prefab value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__NullAllowed__Context const Prefab;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NullAllowed__Context, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__NullAllowed__Context, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::NullAllowed
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16096)), TypeDefinitionIndex(TypeDefinitionIndex(10098))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16097))
// CS Name: ::NullAllowed*
class CORDL_TYPE NullAllowed : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  using Context = ::GlobalNamespace::__NullAllowed__Context;

  /// @brief Field context, offset 0x10, size 0x4
  __declspec(property(get = __get_context, put = __set_context))::GlobalNamespace::__NullAllowed__Context context;

  /// @brief Field propertyName, offset 0x18, size 0x8
  __declspec(property(get = __get_propertyName, put = __set_propertyName))::StringW propertyName;

  /// @brief Field ifNotValue, offset 0x20, size 0x8
  __declspec(property(get = __get_ifNotValue, put = __set_ifNotValue))::System::Object* ifNotValue;

  constexpr ::GlobalNamespace::__NullAllowed__Context& __get_context();

  constexpr ::GlobalNamespace::__NullAllowed__Context const& __get_context() const;

  constexpr void __set_context(::GlobalNamespace::__NullAllowed__Context value);

  constexpr ::StringW& __get_propertyName();

  constexpr ::StringW const& __get_propertyName() const;

  constexpr void __set_propertyName(::StringW value);

  constexpr ::System::Object*& __get_ifNotValue();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_ifNotValue() const;

  constexpr void __set_ifNotValue(::System::Object* value);

  static inline ::GlobalNamespace::NullAllowed* New_ctor();

  /// @brief Method .ctor addr 0x1fac2d0 size 0x1c virtual false final false
  inline void _ctor();

  static inline ::GlobalNamespace::NullAllowed* New_ctor(::GlobalNamespace::__NullAllowed__Context context);

  /// @brief Method .ctor addr 0x1fac2ec size 0x28 virtual false final false
  inline void _ctor(::GlobalNamespace::__NullAllowed__Context context);

  static inline ::GlobalNamespace::NullAllowed* New_ctor(::StringW propertyName, ::System::Object* ifNotValue);

  /// @brief Method .ctor addr 0x1fac314 size 0x30 virtual false final false
  inline void _ctor(::StringW propertyName, ::System::Object* ifNotValue);

  // Ctor Parameters [CppParam { name: "", ty: "NullAllowed", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NullAllowed(NullAllowed&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NullAllowed", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NullAllowed(NullAllowed const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NullAllowed();

public:
  /// @brief Field context, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__NullAllowed__Context ___context;

  /// @brief Field propertyName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___propertyName;

  /// @brief Field ifNotValue, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ___ifNotValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NullAllowed, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::NullAllowed, ___context) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NullAllowed, ___propertyName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NullAllowed, ___ifNotValue) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NullAllowed__Context, "", "NullAllowed/Context");
NEED_NO_BOX(::GlobalNamespace::NullAllowed);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NullAllowed*, "", "NullAllowed");
