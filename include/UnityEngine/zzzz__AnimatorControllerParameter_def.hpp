#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AnimatorControllerParameterType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimatorControllerParameter)
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class AnimatorControllerParameter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AnimatorControllerParameter);
// Type: UnityEngine::AnimatorControllerParameter
// SizeInfo { instance_size: 40, native_size: 24, calculated_instance_size: 40, calculated_native_size: 37, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14746))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14730))
// CS Name: ::UnityEngine::AnimatorControllerParameter*
class CORDL_TYPE AnimatorControllerParameter : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Name, put = __cordl_internal_set_m_Name))::StringW m_Name;

  /// @brief Field m_Type, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Type, put = __cordl_internal_set_m_Type))::UnityEngine::AnimatorControllerParameterType m_Type;

  /// @brief Field m_DefaultFloat, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DefaultFloat, put = __cordl_internal_set_m_DefaultFloat)) float_t m_DefaultFloat;

  /// @brief Field m_DefaultInt, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DefaultInt, put = __cordl_internal_set_m_DefaultInt)) int32_t m_DefaultInt;

  /// @brief Field m_DefaultBool, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_m_DefaultBool, put = __cordl_internal_set_m_DefaultBool)) bool m_DefaultBool;

  __declspec(property(get = get_name))::StringW name;

  constexpr ::StringW& __cordl_internal_get_m_Name();

  constexpr ::StringW const& __cordl_internal_get_m_Name() const;

  constexpr void __cordl_internal_set_m_Name(::StringW value);

  constexpr ::UnityEngine::AnimatorControllerParameterType& __cordl_internal_get_m_Type();

  constexpr ::UnityEngine::AnimatorControllerParameterType const& __cordl_internal_get_m_Type() const;

  constexpr void __cordl_internal_set_m_Type(::UnityEngine::AnimatorControllerParameterType value);

  constexpr float_t& __cordl_internal_get_m_DefaultFloat();

  constexpr float_t const& __cordl_internal_get_m_DefaultFloat() const;

  constexpr void __cordl_internal_set_m_DefaultFloat(float_t value);

  constexpr int32_t& __cordl_internal_get_m_DefaultInt();

  constexpr int32_t const& __cordl_internal_get_m_DefaultInt() const;

  constexpr void __cordl_internal_set_m_DefaultInt(int32_t value);

  constexpr bool& __cordl_internal_get_m_DefaultBool();

  constexpr bool const& __cordl_internal_get_m_DefaultBool() const;

  constexpr void __cordl_internal_set_m_DefaultBool(bool value);

  /// @brief Method get_name, addr 0x2c8bbac, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_name();

  /// @brief Method Equals, addr 0x2c8bbb4, size 0xdc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method GetHashCode, addr 0x2c8bc90, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::UnityEngine::AnimatorControllerParameter* New_ctor();

  /// @brief Method .ctor, addr 0x2c8bcb0, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AnimatorControllerParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnimatorControllerParameter(AnimatorControllerParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnimatorControllerParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnimatorControllerParameter(AnimatorControllerParameter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimatorControllerParameter();

public:
  /// @brief Field m_Name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_Name;

  /// @brief Field m_Type, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::AnimatorControllerParameterType ___m_Type;

  /// @brief Field m_DefaultFloat, offset: 0x1c, size: 0x4, def value: None
  float_t ___m_DefaultFloat;

  /// @brief Field m_DefaultInt, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_DefaultInt;

  /// @brief Field m_DefaultBool, offset: 0x24, size: 0x1, def value: None
  bool ___m_DefaultBool;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AnimatorControllerParameter, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AnimatorControllerParameter, ___m_Name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AnimatorControllerParameter, ___m_Type) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AnimatorControllerParameter, ___m_DefaultFloat) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AnimatorControllerParameter, ___m_DefaultInt) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AnimatorControllerParameter, ___m_DefaultBool) == 0x24, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AnimatorControllerParameter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AnimatorControllerParameter*, "UnityEngine", "AnimatorControllerParameter");
