#pragma once
// IWYU pragma private; include "GlobalNamespace/SaberTypeObject.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SaberType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SaberTypeObject)
namespace GlobalNamespace {
struct SaberType;
}
// Forward declare root types
namespace GlobalNamespace {
class SaberTypeObject;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SaberTypeObject);
// Dependencies SaberType, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SaberTypeObject
class CORDL_TYPE SaberTypeObject : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _saberType, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__saberType, put = __cordl_internal_set__saberType)) ::GlobalNamespace::SaberType _saberType;

  __declspec(property(get = get_saberType)) ::GlobalNamespace::SaberType saberType;

  static inline ::GlobalNamespace::SaberTypeObject* New_ctor();

  constexpr ::GlobalNamespace::SaberType const& __cordl_internal_get__saberType() const;

  constexpr ::GlobalNamespace::SaberType& __cordl_internal_get__saberType();

  constexpr void __cordl_internal_set__saberType(::GlobalNamespace::SaberType value);

  /// @brief Method .ctor, addr 0x3bec244, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_saberType, addr 0x3bec23c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SaberType get_saberType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SaberTypeObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SaberTypeObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SaberTypeObject(SaberTypeObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SaberTypeObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SaberTypeObject(SaberTypeObject const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4665 };

  /// @brief Field _saberType, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::SaberType ____saberType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SaberTypeObject, ____saberType) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SaberTypeObject, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SaberTypeObject);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SaberTypeObject*, "", "SaberTypeObject");
