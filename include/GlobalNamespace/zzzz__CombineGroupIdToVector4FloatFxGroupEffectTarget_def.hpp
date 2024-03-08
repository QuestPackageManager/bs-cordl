#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CombineGroupIdToVector4FloatFxGroupEffectTarget)
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class LightGroupSO;
}
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace GlobalNamespace {
struct __CombineGroupIdToVector4FloatFxGroupEffectTarget__LightGroupSOToIndex;
}
namespace GlobalNamespace {
class __CombineGroupIdToVector4FloatFxGroupEffectTarget____c;
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
class __CombineGroupIdToVector4FloatFxGroupEffectTarget____c;
}
namespace GlobalNamespace {
struct __CombineGroupIdToVector4FloatFxGroupEffectTarget__LightGroupSOToIndex;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget);
MARK_REF_PTR_T(::GlobalNamespace::__CombineGroupIdToVector4FloatFxGroupEffectTarget____c);
MARK_VAL_T(::GlobalNamespace::__CombineGroupIdToVector4FloatFxGroupEffectTarget__LightGroupSOToIndex);
// Type: ::LightGroupSOToIndex
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::CombineGroupIdToVector4FloatFxGroupEffectTarget::LightGroupSOToIndex
struct CORDL_TYPE __CombineGroupIdToVector4FloatFxGroupEffectTarget__LightGroupSOToIndex {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CombineGroupIdToVector4FloatFxGroupEffectTarget__LightGroupSOToIndex();

  // Ctor Parameters [CppParam { name: "lightGroup", ty: "::UnityW<::GlobalNamespace::LightGroupSO>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "",
  // def_value: None }]
  constexpr __CombineGroupIdToVector4FloatFxGroupEffectTarget__LightGroupSOToIndex(::UnityW<::GlobalNamespace::LightGroupSO> lightGroup, int32_t index) noexcept;

  /// @brief Field lightGroup, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LightGroupSO> lightGroup;

  /// @brief Field index, offset: 0x8, size: 0x4, def value: None
  int32_t index;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CombineGroupIdToVector4FloatFxGroupEffectTarget__LightGroupSOToIndex, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__CombineGroupIdToVector4FloatFxGroupEffectTarget__LightGroupSOToIndex, lightGroup) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CombineGroupIdToVector4FloatFxGroupEffectTarget__LightGroupSOToIndex, index) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CombineGroupIdToVector4FloatFxGroupEffectTarget::<>c*
class CORDL_TYPE __CombineGroupIdToVector4FloatFxGroupEffectTarget____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__CombineGroupIdToVector4FloatFxGroupEffectTarget____c* __9;

  /// @brief Field <>9__10_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__10_0,
                             put = setStaticF___9__10_0))::System::Func_2<::GlobalNamespace::__CombineGroupIdToVector4FloatFxGroupEffectTarget__LightGroupSOToIndex, int32_t>* __9__10_0;

  /// @brief Field <>9__10_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__10_1,
                             put = setStaticF___9__10_1))::System::Func_2<::GlobalNamespace::__CombineGroupIdToVector4FloatFxGroupEffectTarget__LightGroupSOToIndex, int32_t>* __9__10_1;

  static inline ::GlobalNamespace::__CombineGroupIdToVector4FloatFxGroupEffectTarget____c* New_ctor();

  /// @brief Method <Awake>b__10_0, addr 0x249c184, size 0x18, virtual false, abstract: false, final false
  inline int32_t _Awake_b__10_0(::GlobalNamespace::__CombineGroupIdToVector4FloatFxGroupEffectTarget__LightGroupSOToIndex item);

  /// @brief Method <Awake>b__10_1, addr 0x249c19c, size 0x8, virtual false, abstract: false, final false
  inline int32_t _Awake_b__10_1(::GlobalNamespace::__CombineGroupIdToVector4FloatFxGroupEffectTarget__LightGroupSOToIndex item);

  /// @brief Method .ctor, addr 0x249c17c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__CombineGroupIdToVector4FloatFxGroupEffectTarget____c* getStaticF___9();

  static inline ::System::Func_2<::GlobalNamespace::__CombineGroupIdToVector4FloatFxGroupEffectTarget__LightGroupSOToIndex, int32_t>* getStaticF___9__10_0();

  static inline ::System::Func_2<::GlobalNamespace::__CombineGroupIdToVector4FloatFxGroupEffectTarget__LightGroupSOToIndex, int32_t>* getStaticF___9__10_1();

  static inline void setStaticF___9(::GlobalNamespace::__CombineGroupIdToVector4FloatFxGroupEffectTarget____c* value);

  static inline void setStaticF___9__10_0(::System::Func_2<::GlobalNamespace::__CombineGroupIdToVector4FloatFxGroupEffectTarget__LightGroupSOToIndex, int32_t>* value);

  static inline void setStaticF___9__10_1(::System::Func_2<::GlobalNamespace::__CombineGroupIdToVector4FloatFxGroupEffectTarget__LightGroupSOToIndex, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CombineGroupIdToVector4FloatFxGroupEffectTarget____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__CombineGroupIdToVector4FloatFxGroupEffectTarget____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CombineGroupIdToVector4FloatFxGroupEffectTarget____c(__CombineGroupIdToVector4FloatFxGroupEffectTarget____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CombineGroupIdToVector4FloatFxGroupEffectTarget____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CombineGroupIdToVector4FloatFxGroupEffectTarget____c(__CombineGroupIdToVector4FloatFxGroupEffectTarget____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CombineGroupIdToVector4FloatFxGroupEffectTarget____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::CombineGroupIdToVector4FloatFxGroupEffectTarget
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 108, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CombineGroupIdToVector4FloatFxGroupEffectTarget*
class CORDL_TYPE CombineGroupIdToVector4FloatFxGroupEffectTarget : public ::GlobalNamespace::FloatFxGroupEffectTarget {
public:
  // Declarations
  using LightGroupSOToIndex = ::GlobalNamespace::__CombineGroupIdToVector4FloatFxGroupEffectTarget__LightGroupSOToIndex;

  using __c = ::GlobalNamespace::__CombineGroupIdToVector4FloatFxGroupEffectTarget____c;

  /// @brief Field _beatmapCallbacksController, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksController,
                      put = __cordl_internal_set__beatmapCallbacksController))::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _data, offset 0x5c, size 0x10
  __declspec(property(get = __cordl_internal_get__data, put = __cordl_internal_set__data))::UnityEngine::Vector4 _data;

  /// @brief Field _defaultValue, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get__defaultValue, put = __cordl_internal_set__defaultValue))::UnityEngine::Vector4 _defaultValue;

  /// @brief Field _didReceiveEventThisFrame, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__didReceiveEventThisFrame, put = __cordl_internal_set__didReceiveEventThisFrame)) bool _didReceiveEventThisFrame;

  /// @brief Field _groupIdToIndex, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__groupIdToIndex, put = __cordl_internal_set__groupIdToIndex))::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* _groupIdToIndex;

  /// @brief Field _lightGroupsToIndices, offset 0x38, size 0x8
  __declspec(
      property(get = __cordl_internal_get__lightGroupsToIndices,
               put = __cordl_internal_set__lightGroupsToIndices))::ArrayW<::GlobalNamespace::__CombineGroupIdToVector4FloatFxGroupEffectTarget__LightGroupSOToIndex,
                                                                          ::Array<::GlobalNamespace::__CombineGroupIdToVector4FloatFxGroupEffectTarget__LightGroupSOToIndex>*> _lightGroupsToIndices;

  /// @brief Field _materialPropertyBlockController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__materialPropertyBlockController,
                      put = __cordl_internal_set__materialPropertyBlockController))::UnityW<::GlobalNamespace::MaterialPropertyBlockController> _materialPropertyBlockController;

  /// @brief Field _propertyId, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__propertyId, put = __cordl_internal_set__propertyId)) int32_t _propertyId;

  /// @brief Field _propertyName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__propertyName, put = __cordl_internal_set__propertyName))::StringW _propertyName;

  /// @brief Method Awake, addr 0x249bbdc, size 0x19c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method HandleBeatmapCallbacksControllerDidProcessAllCallbacksThisFrame, addr 0x249c0b4, size 0x5c, virtual false, abstract: false, final false
  inline void HandleBeatmapCallbacksControllerDidProcessAllCallbacksThisFrame();

  static inline ::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget* New_ctor();

  /// @brief Method OnDestroy, addr 0x249be04, size 0x98, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SetValue, addr 0x249be9c, size 0x10c, virtual true, abstract: false, final false
  inline void SetValue(int32_t groupId, int32_t elementId, float_t value);

  /// @brief Method Start, addr 0x249bd78, size 0x8c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method TriggerValue, addr 0x249bfa8, size 0x10c, virtual true, abstract: false, final false
  inline void TriggerValue(int32_t groupId, int32_t elementId, float_t value);

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __cordl_internal_get__beatmapCallbacksController() const;

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get__data() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get__data();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get__defaultValue() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get__defaultValue();

  constexpr bool const& __cordl_internal_get__didReceiveEventThisFrame() const;

  constexpr bool& __cordl_internal_get__didReceiveEventThisFrame();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*& __cordl_internal_get__groupIdToIndex();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*> const& __cordl_internal_get__groupIdToIndex() const;

  constexpr ::ArrayW<::GlobalNamespace::__CombineGroupIdToVector4FloatFxGroupEffectTarget__LightGroupSOToIndex,
                     ::Array<::GlobalNamespace::__CombineGroupIdToVector4FloatFxGroupEffectTarget__LightGroupSOToIndex>*> const&
  __cordl_internal_get__lightGroupsToIndices() const;

  constexpr ::ArrayW<::GlobalNamespace::__CombineGroupIdToVector4FloatFxGroupEffectTarget__LightGroupSOToIndex,
                     ::Array<::GlobalNamespace::__CombineGroupIdToVector4FloatFxGroupEffectTarget__LightGroupSOToIndex>*>&
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

  constexpr void __cordl_internal_set__lightGroupsToIndices(::ArrayW<::GlobalNamespace::__CombineGroupIdToVector4FloatFxGroupEffectTarget__LightGroupSOToIndex,
                                                                     ::Array<::GlobalNamespace::__CombineGroupIdToVector4FloatFxGroupEffectTarget__LightGroupSOToIndex>*>
                                                                value);

  constexpr void __cordl_internal_set__materialPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value);

  constexpr void __cordl_internal_set__propertyId(int32_t value);

  constexpr void __cordl_internal_set__propertyName(::StringW value);

  /// @brief Method .ctor, addr 0x249c110, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _propertyName, offset: 0x18, size: 0x8, def value: None
  ::StringW ____propertyName;

  /// @brief Field _materialPropertyBlockController, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> ____materialPropertyBlockController;

  /// @brief Field _defaultValue, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::Vector4 ____defaultValue;

  /// @brief Field _lightGroupsToIndices, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__CombineGroupIdToVector4FloatFxGroupEffectTarget__LightGroupSOToIndex,
           ::Array<::GlobalNamespace::__CombineGroupIdToVector4FloatFxGroupEffectTarget__LightGroupSOToIndex>*>
      ____lightGroupsToIndices;

  /// @brief Field _beatmapCallbacksController, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _didReceiveEventThisFrame, offset: 0x48, size: 0x1, def value: None
  bool ____didReceiveEventThisFrame;

  /// @brief Field _groupIdToIndex, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* ____groupIdToIndex;

  /// @brief Field _propertyId, offset: 0x58, size: 0x4, def value: None
  int32_t ____propertyId;

  /// @brief Field _data, offset: 0x5c, size: 0x10, def value: None
  ::UnityEngine::Vector4 ____data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget, 0x70>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget, ____propertyName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget, ____materialPropertyBlockController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget, ____defaultValue) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget, ____lightGroupsToIndices) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget, ____beatmapCallbacksController) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget, ____didReceiveEventThisFrame) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget, ____groupIdToIndex) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget, ____propertyId) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget, ____data) == 0x5c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget*, "", "CombineGroupIdToVector4FloatFxGroupEffectTarget");
NEED_NO_BOX(::GlobalNamespace::__CombineGroupIdToVector4FloatFxGroupEffectTarget____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CombineGroupIdToVector4FloatFxGroupEffectTarget____c*, "", "CombineGroupIdToVector4FloatFxGroupEffectTarget/<>c");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CombineGroupIdToVector4FloatFxGroupEffectTarget__LightGroupSOToIndex, "", "CombineGroupIdToVector4FloatFxGroupEffectTarget/LightGroupSOToIndex");
