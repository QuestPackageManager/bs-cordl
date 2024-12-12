#pragma once
// IWYU pragma private; include "GlobalNamespace/PosesRecorder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PosesRecorder)
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
class PoseObject;
}
namespace GlobalNamespace {
class PosesRecorder___c;
}
namespace GlobalNamespace {
class PosesRecordingData_ExternalCameraCalibration;
}
namespace GlobalNamespace {
class PosesRecordingData;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class PosesRecorder;
}
namespace GlobalNamespace {
class PosesRecorder___c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PosesRecorder);
MARK_REF_PTR_T(::GlobalNamespace::PosesRecorder___c);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PosesRecorder/<>c
class CORDL_TYPE PosesRecorder___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::PosesRecorder___c* __9;

  /// @brief Field <>9__6_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__6_0, put = setStaticF___9__6_0)) ::System::Func_2<::GlobalNamespace::PoseObject*, ::UnityW<::UnityEngine::Transform>>* __9__6_0;

  /// @brief Field <>9__6_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__6_1, put = setStaticF___9__6_1)) ::System::Func_2<::GlobalNamespace::PoseObject*, ::StringW>* __9__6_1;

  static inline ::GlobalNamespace::PosesRecorder___c* New_ctor();

  /// @brief Method <Init>b__6_0, addr 0x3b1a090, size 0x18, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> _Init_b__6_0(::GlobalNamespace::PoseObject* ro);

  /// @brief Method <Init>b__6_1, addr 0x3b1a0a8, size 0x20, virtual false, abstract: false, final false
  inline ::StringW _Init_b__6_1(::GlobalNamespace::PoseObject* ro);

  /// @brief Method .ctor, addr 0x3b1a088, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::PosesRecorder___c* getStaticF___9();

  static inline ::System::Func_2<::GlobalNamespace::PoseObject*, ::UnityW<::UnityEngine::Transform>>* getStaticF___9__6_0();

  static inline ::System::Func_2<::GlobalNamespace::PoseObject*, ::StringW>* getStaticF___9__6_1();

  static inline void setStaticF___9(::GlobalNamespace::PosesRecorder___c* value);

  static inline void setStaticF___9__6_0(::System::Func_2<::GlobalNamespace::PoseObject*, ::UnityW<::UnityEngine::Transform>>* value);

  static inline void setStaticF___9__6_1(::System::Func_2<::GlobalNamespace::PoseObject*, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PosesRecorder___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PosesRecorder___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PosesRecorder___c(PosesRecorder___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PosesRecorder___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PosesRecorder___c(PosesRecorder___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5094 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PosesRecorder___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PosesRecorder
class CORDL_TYPE PosesRecorder : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c = ::GlobalNamespace::PosesRecorder___c;

  /// @brief Field _audioTimeSyncController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSyncController, put = __cordl_internal_set__audioTimeSyncController)) ::UnityW<::GlobalNamespace::AudioTimeSyncController>
      _audioTimeSyncController;

  /// @brief Field _data, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__data, put = __cordl_internal_set__data)) ::GlobalNamespace::PosesRecordingData* _data;

  /// @brief Field _transforms, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__transforms, put = __cordl_internal_set__transforms)) ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>
      _transforms;

  __declspec(property(get = get_data)) ::GlobalNamespace::PosesRecordingData* data;

  /// @brief Method Init, addr 0x3b17780, size 0x234, virtual false, abstract: false, final false
  inline void Init(::ArrayW<::GlobalNamespace::PoseObject*, ::Array<::GlobalNamespace::PoseObject*>*> poseObjects,
                   ::GlobalNamespace::PosesRecordingData_ExternalCameraCalibration* externalCameraCalibration);

  /// @brief Method LateUpdate, addr 0x3b19cd4, size 0x1c, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::PosesRecorder* New_ctor();

  /// @brief Method RecordTick, addr 0x3b19cf0, size 0x1c4, virtual false, abstract: false, final false
  inline void RecordTick(float_t time);

  /// @brief Method StartRecording, addr 0x3b18128, size 0xc, virtual false, abstract: false, final false
  inline void StartRecording();

  /// @brief Method StopRecording, addr 0x3b180a0, size 0xc, virtual false, abstract: false, final false
  inline void StopRecording();

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& __cordl_internal_get__audioTimeSyncController() const;

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& __cordl_internal_get__audioTimeSyncController();

  constexpr ::GlobalNamespace::PosesRecordingData* const& __cordl_internal_get__data() const;

  constexpr ::GlobalNamespace::PosesRecordingData*& __cordl_internal_get__data();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> const& __cordl_internal_get__transforms() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>& __cordl_internal_get__transforms();

  constexpr void __cordl_internal_set__audioTimeSyncController(::UnityW<::GlobalNamespace::AudioTimeSyncController> value);

  constexpr void __cordl_internal_set__data(::GlobalNamespace::PosesRecordingData* value);

  constexpr void __cordl_internal_set__transforms(::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> value);

  /// @brief Method .ctor, addr 0x3b1a024, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_data, addr 0x3b19ccc, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PosesRecordingData* get_data();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PosesRecorder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PosesRecorder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PosesRecorder(PosesRecorder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PosesRecorder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PosesRecorder(PosesRecorder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5095 };

  /// @brief Field _audioTimeSyncController, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioTimeSyncController> ____audioTimeSyncController;

  /// @brief Field _transforms, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> ____transforms;

  /// @brief Field _data, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::PosesRecordingData* ____data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PosesRecorder, ____audioTimeSyncController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PosesRecorder, ____transforms) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PosesRecorder, ____data) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PosesRecorder, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PosesRecorder);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PosesRecorder*, "", "PosesRecorder");
NEED_NO_BOX(::GlobalNamespace::PosesRecorder___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PosesRecorder___c*, "", "PosesRecorder/<>c");
