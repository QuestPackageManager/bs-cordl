#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(HEU_GeneratedOutputData)
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Collider;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
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
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9628))
// CS Name: ::HoudiniEngineUnity::HEU_GeneratedOutputData*
class CORDL_TYPE HEU_GeneratedOutputData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _gameObject, offset 0x10, size 0x8
  __declspec(property(get = __get__gameObject, put = __set__gameObject))::UnityEngine::GameObject* _gameObject;

  /// @brief Field _renderMaterials, offset 0x18, size 0x8
  __declspec(property(get = __get__renderMaterials, put = __set__renderMaterials))::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> _renderMaterials;

  /// @brief Field _colliders, offset 0x20, size 0x8
  __declspec(property(get = __get__colliders, put = __set__colliders))::System::Collections::Generic::List_1<::UnityEngine::Collider*>* _colliders;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_GeneratedOutputData*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_GeneratedOutputData*>*() noexcept;

  constexpr ::UnityEngine::GameObject*& __get__gameObject();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__gameObject() const;

  constexpr void __set__gameObject(::UnityEngine::GameObject* value);

  constexpr ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>& __get__renderMaterials();

  constexpr ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> const& __get__renderMaterials() const;

  constexpr void __set__renderMaterials(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Collider*>*& __get__colliders();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Collider*>*> const& __get__colliders() const;

  constexpr void __set__colliders(::System::Collections::Generic::List_1<::UnityEngine::Collider*>* value);

  /// @brief Method IsEquivalentTo addr 0x2157164 size 0x1ec virtual true final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::HEU_GeneratedOutputData* other);

  static inline ::HoudiniEngineUnity::HEU_GeneratedOutputData* New_ctor();

  /// @brief Method .ctor addr 0x21570e8 size 0x7c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HEU_GeneratedOutputData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_GeneratedOutputData(HEU_GeneratedOutputData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_GeneratedOutputData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_GeneratedOutputData(HEU_GeneratedOutputData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_GeneratedOutputData();

public:
  /// @brief Field _gameObject, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____gameObject;

  /// @brief Field _renderMaterials, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> ____renderMaterials;

  /// @brief Field _colliders, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Collider*>* ____colliders;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_GeneratedOutputData, 0x28>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_GeneratedOutputData);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_GeneratedOutputData*, "HoudiniEngineUnity", "HEU_GeneratedOutputData");
