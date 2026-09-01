#pragma once
// IWYU pragma private; include "GlobalNamespace\MaterialPropertyBlockControllerArrayRandomValueSetter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MaterialPropertyBlockControllerArrayRandomValueSetter)
// Forward declare root types
namespace GlobalNamespace {
class MaterialPropertyBlockControllerArrayRandomValueSetter;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter*, "", "MaterialPropertyBlockControllerArrayRandomValueSetter");
// Dependencies MaterialPropertyBlockController, UnityEngine.MaterialPropertyBlock, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: MaterialPropertyBlockControllerArrayRandomValueSetter
class CORDL_TYPE MaterialPropertyBlockControllerArrayRandomValueSetter : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _materialPropertyBlockControllers, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__materialPropertyBlockControllers,
                      put = __cordl_internal_set__materialPropertyBlockControllers)) ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>>
      _materialPropertyBlockControllers;

  /// @brief Field _materialPropertyBlocks, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__materialPropertyBlocks, put = __cordl_internal_set__materialPropertyBlocks)) ::ArrayW<::UnityEngine::MaterialPropertyBlock*> _materialPropertyBlocks;

  /// @brief Field _max, offset 0x3c, size 0xc
  __declspec(property(get = __cordl_internal_get__max, put = __cordl_internal_set__max)) ::UnityEngine::Vector3 _max;

  /// @brief Field _min, offset 0x30, size 0xc
  __declspec(property(get = __cordl_internal_get__min, put = __cordl_internal_set__min)) ::UnityEngine::Vector3 _min;

  /// @brief Field _propertyId, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__propertyId, put = __cordl_internal_set__propertyId)) int32_t _propertyId;

  /// @brief Field _propertyName, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__propertyName, put = __cordl_internal_set__propertyName)) ::StringW _propertyName;

  /// @brief Method ApplyParams, addr 0x5872024, size 0x190, virtual false, abstract: false, final false
  inline void ApplyParams();

  static inline ::GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter* New_ctor();

  /// @brief Method OnValidate, addr 0x58721b4, size 0x28, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method RefreshPropertyId, addr 0x5872004, size 0x20, virtual false, abstract: false, final false
  inline void RefreshPropertyId();

  /// @brief Method Start, addr 0x5871fdc, size 0x28, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>> const& __cordl_internal_get__materialPropertyBlockControllers() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>>& __cordl_internal_get__materialPropertyBlockControllers();

  constexpr ::ArrayW<::UnityEngine::MaterialPropertyBlock*> const& __cordl_internal_get__materialPropertyBlocks() const;

  constexpr ::ArrayW<::UnityEngine::MaterialPropertyBlock*>& __cordl_internal_get__materialPropertyBlocks();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__max() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__max();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__min() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__min();

  constexpr int32_t const& __cordl_internal_get__propertyId() const;

  constexpr int32_t& __cordl_internal_get__propertyId();

  constexpr ::StringW const& __cordl_internal_get__propertyName() const;

  constexpr ::StringW& __cordl_internal_get__propertyName();

  constexpr void __cordl_internal_set__materialPropertyBlockControllers(::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>> value);

  constexpr void __cordl_internal_set__materialPropertyBlocks(::ArrayW<::UnityEngine::MaterialPropertyBlock*> value);

  constexpr void __cordl_internal_set__max(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__min(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__propertyId(int32_t value);

  constexpr void __cordl_internal_set__propertyName(::StringW value);

  /// @brief Method .ctor, addr 0x58721dc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialPropertyBlockControllerArrayRandomValueSetter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockControllerArrayRandomValueSetter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaterialPropertyBlockControllerArrayRandomValueSetter(MaterialPropertyBlockControllerArrayRandomValueSetter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockControllerArrayRandomValueSetter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaterialPropertyBlockControllerArrayRandomValueSetter(MaterialPropertyBlockControllerArrayRandomValueSetter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19570 };

  /// @brief Field _materialPropertyBlockControllers, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>> ____materialPropertyBlockControllers;

  /// @brief Field _propertyName, offset: 0x28, size: 0x8, def value: None
  ::StringW ____propertyName;

  /// @brief Field _min, offset: 0x30, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____min;

  /// @brief Field _max, offset: 0x3c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____max;

  /// @brief Field _materialPropertyBlocks, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::MaterialPropertyBlock*> ____materialPropertyBlocks;

  /// @brief Field _propertyId, offset: 0x50, size: 0x4, def value: None
  int32_t ____propertyId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter, ____materialPropertyBlockControllers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter, ____propertyName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter, ____min) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter, ____max) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter, ____materialPropertyBlocks) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter, ____propertyId) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter) == 0x58, "Size mismatch!");

} // namespace GlobalNamespace
