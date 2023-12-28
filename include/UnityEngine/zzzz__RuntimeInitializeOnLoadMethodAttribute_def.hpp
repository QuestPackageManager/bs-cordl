#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Scripting/zzzz__PreserveAttribute_def.hpp"
#include "UnityEngine/zzzz__RuntimeInitializeLoadType_def.hpp"
CORDL_MODULE_EXPORT(RuntimeInitializeOnLoadMethodAttribute)
namespace UnityEngine {
struct RuntimeInitializeLoadType;
}
// Forward declare root types
namespace UnityEngine {
class RuntimeInitializeOnLoadMethodAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::RuntimeInitializeOnLoadMethodAttribute);
// Type: UnityEngine::RuntimeInitializeOnLoadMethodAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10194)), TypeDefinitionIndex(TypeDefinitionIndex(10317))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10195))
// CS Name: ::UnityEngine::RuntimeInitializeOnLoadMethodAttribute*
class CORDL_TYPE RuntimeInitializeOnLoadMethodAttribute : public ::UnityEngine::Scripting::PreserveAttribute {
public:
  // Declarations
  /// @brief Field m_LoadType, offset 0x10, size 0x4
  __declspec(property(get = __get_m_LoadType, put = __set_m_LoadType))::UnityEngine::RuntimeInitializeLoadType m_LoadType;

  __declspec(property(put = set_loadType))::UnityEngine::RuntimeInitializeLoadType loadType;

  constexpr ::UnityEngine::RuntimeInitializeLoadType& __get_m_LoadType();

  constexpr ::UnityEngine::RuntimeInitializeLoadType const& __get_m_LoadType() const;

  constexpr void __set_m_LoadType(::UnityEngine::RuntimeInitializeLoadType value);

  static inline ::UnityEngine::RuntimeInitializeOnLoadMethodAttribute* New_ctor();

  /// @brief Method .ctor addr 0x2ccdb88 size 0x1c virtual false final false
  inline void _ctor();

  static inline ::UnityEngine::RuntimeInitializeOnLoadMethodAttribute* New_ctor(::UnityEngine::RuntimeInitializeLoadType loadType);

  /// @brief Method .ctor addr 0x2ccdbac size 0x28 virtual false final false
  inline void _ctor(::UnityEngine::RuntimeInitializeLoadType loadType);

  /// @brief Method set_loadType addr 0x2ccdba4 size 0x8 virtual false final false
  inline void set_loadType(::UnityEngine::RuntimeInitializeLoadType value);

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeInitializeOnLoadMethodAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimeInitializeOnLoadMethodAttribute(RuntimeInitializeOnLoadMethodAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeInitializeOnLoadMethodAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimeInitializeOnLoadMethodAttribute(RuntimeInitializeOnLoadMethodAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeInitializeOnLoadMethodAttribute();

public:
  /// @brief Field m_LoadType, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::RuntimeInitializeLoadType ___m_LoadType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::RuntimeInitializeOnLoadMethodAttribute, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::RuntimeInitializeOnLoadMethodAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RuntimeInitializeOnLoadMethodAttribute*, "UnityEngine", "RuntimeInitializeOnLoadMethodAttribute");
