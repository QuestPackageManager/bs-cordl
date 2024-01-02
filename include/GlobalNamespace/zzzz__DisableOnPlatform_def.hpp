#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(DisableOnPlatform)
namespace UnityEngine {
struct RuntimePlatform;
}
// Forward declare root types
namespace GlobalNamespace {
class DisableOnPlatform;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DisableOnPlatform);
// Type: ::DisableOnPlatform
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5365))
// CS Name: ::DisableOnPlatform*
class CORDL_TYPE DisableOnPlatform : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _disabledPlatforms, offset 0x18, size 0x8
  __declspec(property(get = __get__disabledPlatforms, put = __set__disabledPlatforms))::ArrayW<::UnityEngine::RuntimePlatform, ::Array<::UnityEngine::RuntimePlatform>*> _disabledPlatforms;

  constexpr ::ArrayW<::UnityEngine::RuntimePlatform, ::Array<::UnityEngine::RuntimePlatform>*>& __get__disabledPlatforms();

  constexpr ::ArrayW<::UnityEngine::RuntimePlatform, ::Array<::UnityEngine::RuntimePlatform>*> const& __get__disabledPlatforms() const;

  constexpr void __set__disabledPlatforms(::ArrayW<::UnityEngine::RuntimePlatform, ::Array<::UnityEngine::RuntimePlatform>*> value);

  /// @brief Method Awake, addr 0x226c564, size 0x98, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::DisableOnPlatform* New_ctor();

  /// @brief Method .ctor, addr 0x226c5fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DisableOnPlatform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DisableOnPlatform(DisableOnPlatform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DisableOnPlatform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DisableOnPlatform(DisableOnPlatform const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DisableOnPlatform();

public:
  /// @brief Field _disabledPlatforms, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::RuntimePlatform, ::Array<::UnityEngine::RuntimePlatform>*> ____disabledPlatforms;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DisableOnPlatform, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DisableOnPlatform, ____disabledPlatforms) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DisableOnPlatform);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DisableOnPlatform*, "", "DisableOnPlatform");
