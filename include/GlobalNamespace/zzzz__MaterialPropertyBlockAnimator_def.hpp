#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MaterialPropertyBlockAnimator)
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
// Forward declare root types
namespace GlobalNamespace {
class MaterialPropertyBlockAnimator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MaterialPropertyBlockAnimator);
// Type: ::MaterialPropertyBlockAnimator
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 45, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10225))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14563))
// CS Name: ::MaterialPropertyBlockAnimator*
class CORDL_TYPE MaterialPropertyBlockAnimator : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _property, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__property, put = __cordl_internal_set__property))::StringW _property;

  /// @brief Field _materialPropertyBlockController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__materialPropertyBlockController,
                      put = __cordl_internal_set__materialPropertyBlockController))::UnityW<::GlobalNamespace::MaterialPropertyBlockController> _materialPropertyBlockController;

  /// @brief Field propertyId, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_propertyId, put = __cordl_internal_set_propertyId)) int32_t propertyId;

  /// @brief Field _isInitialized, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get__isInitialized, put = __cordl_internal_set__isInitialized)) bool _isInitialized;

  __declspec(property(get = get_materialPropertyBlockController,
                      put = set_materialPropertyBlockController))::UnityW<::GlobalNamespace::MaterialPropertyBlockController> materialPropertyBlockController;

  constexpr ::StringW& __cordl_internal_get__property();

  constexpr ::StringW const& __cordl_internal_get__property() const;

  constexpr void __cordl_internal_set__property(::StringW value);

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& __cordl_internal_get__materialPropertyBlockController();

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& __cordl_internal_get__materialPropertyBlockController() const;

  constexpr void __cordl_internal_set__materialPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value);

  constexpr int32_t& __cordl_internal_get_propertyId();

  constexpr int32_t const& __cordl_internal_get_propertyId() const;

  constexpr void __cordl_internal_set_propertyId(int32_t value);

  constexpr bool& __cordl_internal_get__isInitialized();

  constexpr bool const& __cordl_internal_get__isInitialized() const;

  constexpr void __cordl_internal_set__isInitialized(bool value);

  /// @brief Method get_materialPropertyBlockController, addr 0x211498c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> get_materialPropertyBlockController();

  /// @brief Method set_materialPropertyBlockController, addr 0x2114994, size 0x7c, virtual false, abstract: false, final false
  inline void set_materialPropertyBlockController(::GlobalNamespace::MaterialPropertyBlockController* value);

  /// @brief Method SetProperty, addr 0x2114a10, size 0x4, virtual true, abstract: false, final false
  inline void SetProperty();

  /// @brief Method Awake, addr 0x2114a14, size 0x90, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Update, addr 0x2114ad4, size 0x28, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method LazyInit, addr 0x2114aa4, size 0x30, virtual false, abstract: false, final false
  inline void LazyInit();

  /// @brief Method RefreshProperty, addr 0x2114cec, size 0x20, virtual false, abstract: false, final false
  inline void RefreshProperty();

  static inline ::GlobalNamespace::MaterialPropertyBlockAnimator* New_ctor();

  /// @brief Method .ctor, addr 0x2114d0c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockAnimator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaterialPropertyBlockAnimator(MaterialPropertyBlockAnimator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockAnimator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaterialPropertyBlockAnimator(MaterialPropertyBlockAnimator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialPropertyBlockAnimator();

public:
  /// @brief Field _property, offset: 0x18, size: 0x8, def value: None
  ::StringW ____property;

  /// @brief Field _materialPropertyBlockController, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> ____materialPropertyBlockController;

  /// @brief Field propertyId, offset: 0x28, size: 0x4, def value: None
  int32_t ___propertyId;

  /// @brief Field _isInitialized, offset: 0x2c, size: 0x1, def value: None
  bool ____isInitialized;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MaterialPropertyBlockAnimator, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockAnimator, ____property) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockAnimator, ____materialPropertyBlockController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockAnimator, ___propertyId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockAnimator, ____isInitialized) == 0x2c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MaterialPropertyBlockAnimator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaterialPropertyBlockAnimator*, "", "MaterialPropertyBlockAnimator");
