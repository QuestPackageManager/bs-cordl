#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_GeneratedOutputData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(HEU_GeneratedOutputData)
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_GeneratedOutputData;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_GeneratedOutputData);
// Type: HoudiniEngineUnity::HEU_GeneratedOutputData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::HEU_GeneratedOutputData*
class CORDL_TYPE HEU_GeneratedOutputData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _colliders, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__colliders, put = __cordl_internal_set__colliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* _colliders;

  /// @brief Field _gameObject, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__gameObject, put = __cordl_internal_set__gameObject)) ::UnityW<::UnityEngine::GameObject> _gameObject;

  /// @brief Field _renderMaterials, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__renderMaterials,
                      put = __cordl_internal_set__renderMaterials)) ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>
      _renderMaterials;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_GeneratedOutputData*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_GeneratedOutputData*>*() noexcept;

  /// @brief Method IsEquivalentTo, addr 0x39a4fdc, size 0x1ec, virtual true, abstract: false, final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::HEU_GeneratedOutputData* other);

  static inline ::HoudiniEngineUnity::HEU_GeneratedOutputData* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get__colliders();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*> const& __cordl_internal_get__colliders() const;

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__gameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__gameObject();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> const& __cordl_internal_get__renderMaterials() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>& __cordl_internal_get__renderMaterials();

  constexpr void __cordl_internal_set__colliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* value);

  constexpr void __cordl_internal_set__gameObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__renderMaterials(::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> value);

  /// @brief Method .ctor, addr 0x39a4f60, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_GeneratedOutputData*>"
  constexpr ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_GeneratedOutputData*>* i___HoudiniEngineUnity__IEquivable_1___HoudiniEngineUnity__HEU_GeneratedOutputData__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_GeneratedOutputData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_GeneratedOutputData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_GeneratedOutputData(HEU_GeneratedOutputData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_GeneratedOutputData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_GeneratedOutputData(HEU_GeneratedOutputData const&) = delete;

  /// @brief Field _gameObject, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____gameObject;

  /// @brief Field _renderMaterials, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> ____renderMaterials;

  /// @brief Field _colliders, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* ____colliders;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11572 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_GeneratedOutputData, 0x28>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GeneratedOutputData, ____gameObject) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GeneratedOutputData, ____renderMaterials) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GeneratedOutputData, ____colliders) == 0x20, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_GeneratedOutputData);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_GeneratedOutputData*, "HoudiniEngineUnity", "HEU_GeneratedOutputData");
