#pragma once
// IWYU pragma private; include "GlobalNamespace/CombineGroupIdToVector4FloatFxGroupEffectTarget.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CombineGroupIdToVector4FloatFxGroupEffectTarget)
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
struct CombineGroupIdToVector4FloatFxGroupEffectTarget_LightGroupSOToIndex;
}
namespace GlobalNamespace {
class CombineGroupIdToVector4FloatFxGroupEffectTarget___c;
}
namespace GlobalNamespace {
class LightGroupSO;
}
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class CombineGroupIdToVector4FloatFxGroupEffectTarget;
}
namespace GlobalNamespace {
class CombineGroupIdToVector4FloatFxGroupEffectTarget___c;
}
namespace GlobalNamespace {
struct CombineGroupIdToVector4FloatFxGroupEffectTarget_LightGroupSOToIndex;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget);
MARK_REF_PTR_T(::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget___c);
MARK_VAL_T(::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget_LightGroupSOToIndex);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: CombineGroupIdToVector4FloatFxGroupEffectTarget/LightGroupSOToIndex
struct CORDL_TYPE CombineGroupIdToVector4FloatFxGroupEffectTarget_LightGroupSOToIndex {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr CombineGroupIdToVector4FloatFxGroupEffectTarget_LightGroupSOToIndex();

  // Ctor Parameters [CppParam { name: "lightGroup", ty: "::UnityW<::GlobalNamespace::LightGroupSO>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "",
  // def_value: None }]
  constexpr CombineGroupIdToVector4FloatFxGroupEffectTarget_LightGroupSOToIndex(::UnityW<::GlobalNamespace::LightGroupSO> lightGroup, int32_t index) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4264 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field lightGroup, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LightGroupSO> lightGroup;

  /// @brief Field index, offset: 0x8, size: 0x4, def value: None
  int32_t index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget_LightGroupSOToIndex, lightGroup) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget_LightGroupSOToIndex, index) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget_LightGroupSOToIndex, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CombineGroupIdToVector4FloatFxGroupEffectTarget/<>c
class CORDL_TYPE CombineGroupIdToVector4FloatFxGroupEffectTarget___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget___c* __9;

  /// @brief Field <>9__10_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__10_0,
                      put = setStaticF___9__10_0)) ::System::Func_2<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget_LightGroupSOToIndex, int32_t>* __9__10_0;

  /// @brief Field <>9__10_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__10_1,
                      put = setStaticF___9__10_1)) ::System::Func_2<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget_LightGroupSOToIndex, int32_t>* __9__10_1;

  static inline ::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget___c* New_ctor();

  /// @brief Method <Awake>b__10_0, addr 0x3b88a50, size 0x18, virtual false, abstract: false, final false
  inline int32_t _Awake_b__10_0(::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget_LightGroupSOToIndex item);

  /// @brief Method <Awake>b__10_1, addr 0x3b88a68, size 0x8, virtual false, abstract: false, final false
  inline int32_t _Awake_b__10_1(::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget_LightGroupSOToIndex item);

  /// @brief Method .ctor, addr 0x3b88a48, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget___c* getStaticF___9();

  static inline ::System::Func_2<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget_LightGroupSOToIndex, int32_t>* getStaticF___9__10_0();

  static inline ::System::Func_2<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget_LightGroupSOToIndex, int32_t>* getStaticF___9__10_1();

  static inline void setStaticF___9(::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget___c* value);

  static inline void setStaticF___9__10_0(::System::Func_2<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget_LightGroupSOToIndex, int32_t>* value);

  static inline void setStaticF___9__10_1(::System::Func_2<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget_LightGroupSOToIndex, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CombineGroupIdToVector4FloatFxGroupEffectTarget___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CombineGroupIdToVector4FloatFxGroupEffectTarget___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CombineGroupIdToVector4FloatFxGroupEffectTarget___c(CombineGroupIdToVector4FloatFxGroupEffectTarget___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CombineGroupIdToVector4FloatFxGroupEffectTarget___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CombineGroupIdToVector4FloatFxGroupEffectTarget___c(CombineGroupIdToVector4FloatFxGroupEffectTarget___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4265 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies FloatFxGroupEffectTarget, UnityEngine.Vector4
namespace GlobalNamespace {
// Is value type: false
// CS Name: CombineGroupIdToVector4FloatFxGroupEffectTarget
class CORDL_TYPE CombineGroupIdToVector4FloatFxGroupEffectTarget : public ::GlobalNamespace::FloatFxGroupEffectTarget {
public:
  // Declarations
  using LightGroupSOToIndex = ::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget_LightGroupSOToIndex;

  using __c = ::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget___c;

  /// @brief Field _beatmapCallbacksController, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksController,
                      put = __cordl_internal_set__beatmapCallbacksController)) ::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _data, offset 0x64, size 0x10
  __declspec(property(get = __cordl_internal_get__data, put = __cordl_internal_set__data)) ::UnityEngine::Vector4 _data;

  /// @brief Field _defaultValue, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get__defaultValue, put = __cordl_internal_set__defaultValue)) ::UnityEngine::Vector4 _defaultValue;

  /// @brief Field _didReceiveEventThisFrame, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__didReceiveEventThisFrame, put = __cordl_internal_set__didReceiveEventThisFrame)) bool _didReceiveEventThisFrame;

  /// @brief Field _groupIdToIndex, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__groupIdToIndex, put = __cordl_internal_set__groupIdToIndex)) ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* _groupIdToIndex;

  /// @brief Field _lightGroupsToIndices, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__lightGroupsToIndices,
                      put = __cordl_internal_set__lightGroupsToIndices)) ::ArrayW<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget_LightGroupSOToIndex,
                                                                                  ::Array<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget_LightGroupSOToIndex>*>
      _lightGroupsToIndices;

  /// @brief Field _materialPropertyBlockController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__materialPropertyBlockController,
                      put = __cordl_internal_set__materialPropertyBlockController)) ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>
      _materialPropertyBlockController;

  /// @brief Field _propertyId, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get__propertyId, put = __cordl_internal_set__propertyId)) int32_t _propertyId;

  /// @brief Field _propertyName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__propertyName, put = __cordl_internal_set__propertyName)) ::StringW _propertyName;

  /// @brief Method Awake, addr 0x3b884c0, size 0x198, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method HandleBeatmapCallbacksControllerDidProcessAllCallbacksThisFrame, addr 0x3b88988, size 0x5c, virtual false, abstract: false, final false
  inline void HandleBeatmapCallbacksControllerDidProcessAllCallbacksThisFrame();

  static inline ::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget* New_ctor();

  /// @brief Method OnDestroy, addr 0x3b886e8, size 0x90, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SetValue, addr 0x3b88778, size 0x108, virtual true, abstract: false, final false
  inline void SetValue(int32_t groupId, int32_t elementId, float_t value);

  /// @brief Method Start, addr 0x3b88658, size 0x90, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method TriggerValue, addr 0x3b88880, size 0x108, virtual true, abstract: false, final false
  inline void TriggerValue(int32_t groupId, int32_t elementId, float_t value);

  constexpr ::GlobalNamespace::BeatmapCallbacksController* const& __cordl_internal_get__beatmapCallbacksController() const;

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__beatmapCallbacksController();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get__data() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get__data();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get__defaultValue() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get__defaultValue();

  constexpr bool const& __cordl_internal_get__didReceiveEventThisFrame() const;

  constexpr bool& __cordl_internal_get__didReceiveEventThisFrame();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* const& __cordl_internal_get__groupIdToIndex() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*& __cordl_internal_get__groupIdToIndex();

  constexpr ::ArrayW<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget_LightGroupSOToIndex,
                     ::Array<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget_LightGroupSOToIndex>*> const&
  __cordl_internal_get__lightGroupsToIndices() const;

  constexpr ::ArrayW<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget_LightGroupSOToIndex,
                     ::Array<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget_LightGroupSOToIndex>*>&
  __cordl_internal_get__lightGroupsToIndices();

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& __cordl_internal_get__materialPropertyBlockController() const;

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& __cordl_internal_get__materialPropertyBlockController();

  constexpr int32_t const& __cordl_internal_get__propertyId() const;

  constexpr int32_t& __cordl_internal_get__propertyId();

  constexpr ::StringW const& __cordl_internal_get__propertyName() const;

  constexpr ::StringW& __cordl_internal_get__propertyName();

  constexpr void __cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr void __cordl_internal_set__data(::UnityEngine::Vector4 value);

  constexpr void __cordl_internal_set__defaultValue(::UnityEngine::Vector4 value);

  constexpr void __cordl_internal_set__didReceiveEventThisFrame(bool value);

  constexpr void __cordl_internal_set__groupIdToIndex(::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* value);

  constexpr void __cordl_internal_set__lightGroupsToIndices(
      ::ArrayW<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget_LightGroupSOToIndex, ::Array<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget_LightGroupSOToIndex>*>
          value);

  constexpr void __cordl_internal_set__materialPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value);

  constexpr void __cordl_internal_set__propertyId(int32_t value);

  constexpr void __cordl_internal_set__propertyName(::StringW value);

  /// @brief Method .ctor, addr 0x3b889e4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CombineGroupIdToVector4FloatFxGroupEffectTarget();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CombineGroupIdToVector4FloatFxGroupEffectTarget", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CombineGroupIdToVector4FloatFxGroupEffectTarget(CombineGroupIdToVector4FloatFxGroupEffectTarget&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CombineGroupIdToVector4FloatFxGroupEffectTarget", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CombineGroupIdToVector4FloatFxGroupEffectTarget(CombineGroupIdToVector4FloatFxGroupEffectTarget const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4266 };

  /// @brief Field _propertyName, offset: 0x20, size: 0x8, def value: None
  ::StringW ____propertyName;

  /// @brief Field _materialPropertyBlockController, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> ____materialPropertyBlockController;

  /// @brief Field _defaultValue, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Vector4 ____defaultValue;

  /// @brief Field _lightGroupsToIndices, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget_LightGroupSOToIndex, ::Array<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget_LightGroupSOToIndex>*>
      ____lightGroupsToIndices;

  /// @brief Field _beatmapCallbacksController, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _didReceiveEventThisFrame, offset: 0x50, size: 0x1, def value: None
  bool ____didReceiveEventThisFrame;

  /// @brief Field _groupIdToIndex, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* ____groupIdToIndex;

  /// @brief Field _propertyId, offset: 0x60, size: 0x4, def value: None
  int32_t ____propertyId;

  /// @brief Field _data, offset: 0x64, size: 0x10, def value: None
  ::UnityEngine::Vector4 ____data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget, ____propertyName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget, ____materialPropertyBlockController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget, ____defaultValue) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget, ____lightGroupsToIndices) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget, ____beatmapCallbacksController) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget, ____didReceiveEventThisFrame) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget, ____groupIdToIndex) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget, ____propertyId) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget, ____data) == 0x64, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget, 0x78>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget*, "", "CombineGroupIdToVector4FloatFxGroupEffectTarget");
NEED_NO_BOX(::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget___c*, "", "CombineGroupIdToVector4FloatFxGroupEffectTarget/<>c");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget_LightGroupSOToIndex, "", "CombineGroupIdToVector4FloatFxGroupEffectTarget/LightGroupSOToIndex");
