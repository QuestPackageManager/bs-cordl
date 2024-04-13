#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__ScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TransformScopeConcreteIdArgConditionCopyNonLazyBinder)
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine {
class Transform;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class GameObjectCreationParameters;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class ScopeConcreteIdArgConditionCopyNonLazyBinder;
}
// Forward declare root types
namespace Zenject {
class TransformScopeConcreteIdArgConditionCopyNonLazyBinder;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder);
// Type: Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder*
class CORDL_TYPE TransformScopeConcreteIdArgConditionCopyNonLazyBinder : public ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder {
public:
  // Declarations
  __declspec(property(get = get_GameObjectInfo, put = set_GameObjectInfo))::Zenject::GameObjectCreationParameters* GameObjectInfo;

  /// @brief Field <GameObjectInfo>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__GameObjectInfo_k__BackingField,
                      put = __cordl_internal_set__GameObjectInfo_k__BackingField))::Zenject::GameObjectCreationParameters* _GameObjectInfo_k__BackingField;

  static inline ::Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder* New_ctor(::Zenject::BindInfo* bindInfo, ::Zenject::GameObjectCreationParameters* gameObjectInfo);

  /// @brief Method UnderTransform, addr 0x342a004, size 0x1c, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* UnderTransform(::UnityEngine::Transform* parent);

  /// @brief Method UnderTransform, addr 0x342a020, size 0x1c, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* UnderTransform(::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::Transform>>* parentGetter);

  /// @brief Method UnderTransformGroup, addr 0x342a03c, size 0x1c, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* UnderTransformGroup(::StringW transformGroupname);

  constexpr ::Zenject::GameObjectCreationParameters*& __cordl_internal_get__GameObjectInfo_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const& __cordl_internal_get__GameObjectInfo_k__BackingField() const;

  constexpr void __cordl_internal_set__GameObjectInfo_k__BackingField(::Zenject::GameObjectCreationParameters* value);

  /// @brief Method .ctor, addr 0x3429fb0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::BindInfo* bindInfo, ::Zenject::GameObjectCreationParameters* gameObjectInfo);

  /// @brief Method get_GameObjectInfo, addr 0x3429ff4, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::GameObjectCreationParameters* get_GameObjectInfo();

  /// @brief Method set_GameObjectInfo, addr 0x3429ffc, size 0x8, virtual false, abstract: false, final false
  inline void set_GameObjectInfo(::Zenject::GameObjectCreationParameters* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TransformScopeConcreteIdArgConditionCopyNonLazyBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TransformScopeConcreteIdArgConditionCopyNonLazyBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TransformScopeConcreteIdArgConditionCopyNonLazyBinder(TransformScopeConcreteIdArgConditionCopyNonLazyBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TransformScopeConcreteIdArgConditionCopyNonLazyBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TransformScopeConcreteIdArgConditionCopyNonLazyBinder(TransformScopeConcreteIdArgConditionCopyNonLazyBinder const&) = delete;

  /// @brief Field <GameObjectInfo>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::Zenject::GameObjectCreationParameters* ____GameObjectInfo_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder, 0x28>, "Size mismatch!");

static_assert(offsetof(::Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder, ____GameObjectInfo_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder*, "Zenject", "TransformScopeConcreteIdArgConditionCopyNonLazyBinder");
