#pragma once
// IWYU pragma private; include "UnityEngine/RuntimeInitializeOnLoadMethodAttribute.hpp"
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
// Dependencies UnityEngine.RuntimeInitializeLoadType, UnityEngine.Scripting.PreserveAttribute
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.RuntimeInitializeOnLoadMethodAttribute
class CORDL_TYPE RuntimeInitializeOnLoadMethodAttribute : public ::UnityEngine::Scripting::PreserveAttribute {
public:
  // Declarations
  __declspec(property(put = set_loadType)) ::UnityEngine::RuntimeInitializeLoadType loadType;

  /// @brief Field m_LoadType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LoadType, put = __cordl_internal_set_m_LoadType)) ::UnityEngine::RuntimeInitializeLoadType m_LoadType;

  static inline ::UnityEngine::RuntimeInitializeOnLoadMethodAttribute* New_ctor(::UnityEngine::RuntimeInitializeLoadType loadType);

  constexpr ::UnityEngine::RuntimeInitializeLoadType const& __cordl_internal_get_m_LoadType() const;

  constexpr ::UnityEngine::RuntimeInitializeLoadType& __cordl_internal_get_m_LoadType();

  constexpr void __cordl_internal_set_m_LoadType(::UnityEngine::RuntimeInitializeLoadType value);

  /// @brief Method .ctor, addr 0x48aec08, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::RuntimeInitializeLoadType loadType);

  /// @brief Method set_loadType, addr 0x48aec30, size 0x8, virtual false, abstract: false, final false
  inline void set_loadType(::UnityEngine::RuntimeInitializeLoadType value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeInitializeOnLoadMethodAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RuntimeInitializeOnLoadMethodAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimeInitializeOnLoadMethodAttribute(RuntimeInitializeOnLoadMethodAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeInitializeOnLoadMethodAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimeInitializeOnLoadMethodAttribute(RuntimeInitializeOnLoadMethodAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10902 };

  /// @brief Field m_LoadType, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::RuntimeInitializeLoadType ___m_LoadType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::RuntimeInitializeOnLoadMethodAttribute, ___m_LoadType) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::RuntimeInitializeOnLoadMethodAttribute, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::RuntimeInitializeOnLoadMethodAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RuntimeInitializeOnLoadMethodAttribute*, "UnityEngine", "RuntimeInitializeOnLoadMethodAttribute");
