#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PosesRecorder)
namespace GlobalNamespace {
class PoseObject;
}
namespace GlobalNamespace {
class __PosesRecordingData__ExternalCameraCalibration;
}
namespace GlobalNamespace {
class __PosesRecorder____c;
}
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class PosesRecordingData;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class PosesRecorder;
}
namespace GlobalNamespace {
class __PosesRecorder____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PosesRecorder);
MARK_REF_PTR_T(::GlobalNamespace::__PosesRecorder____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5930))
// CS Name: ::PosesRecorder::<>c*
class CORDL_TYPE __PosesRecorder____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__PosesRecorder____c* __9;

  /// @brief Field <>9__6_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__6_0, put = setStaticF___9__6_0))::System::Func_2<::GlobalNamespace::PoseObject*, ::UnityEngine::Transform*>* __9__6_0;

  /// @brief Field <>9__6_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__6_1, put = setStaticF___9__6_1))::System::Func_2<::GlobalNamespace::PoseObject*, ::StringW>* __9__6_1;

  static inline void setStaticF___9(::GlobalNamespace::__PosesRecorder____c* value);

  static inline ::GlobalNamespace::__PosesRecorder____c* getStaticF___9();

  static inline void setStaticF___9__6_0(::System::Func_2<::GlobalNamespace::PoseObject*, ::UnityEngine::Transform*>* value);

  static inline ::System::Func_2<::GlobalNamespace::PoseObject*, ::UnityEngine::Transform*>* getStaticF___9__6_0();

  static inline void setStaticF___9__6_1(::System::Func_2<::GlobalNamespace::PoseObject*, ::StringW>* value);

  static inline ::System::Func_2<::GlobalNamespace::PoseObject*, ::StringW>* getStaticF___9__6_1();

  static inline ::GlobalNamespace::__PosesRecorder____c* New_ctor();

  /// @brief Method .ctor, addr 0x2301f50, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <Init>b__6_0, addr 0x2301f58, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Transform* _Init_b__6_0(::GlobalNamespace::PoseObject* ro);

  /// @brief Method <Init>b__6_1, addr 0x2301f70, size 0x20, virtual false, abstract: false, final false
  inline ::StringW _Init_b__6_1(::GlobalNamespace::PoseObject* ro);

  // Ctor Parameters [CppParam { name: "", ty: "__PosesRecorder____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PosesRecorder____c(__PosesRecorder____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PosesRecorder____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PosesRecorder____c(__PosesRecorder____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PosesRecorder____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PosesRecorder____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::PosesRecorder
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5931))
// CS Name: ::PosesRecorder*
class CORDL_TYPE PosesRecorder : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c = ::GlobalNamespace::__PosesRecorder____c;

  /// @brief Field _audioTimeSyncController, offset 0x18, size 0x8
  __declspec(property(get = __get__audioTimeSyncController, put = __set__audioTimeSyncController))::GlobalNamespace::AudioTimeSyncController* _audioTimeSyncController;

  /// @brief Field _transforms, offset 0x20, size 0x8
  __declspec(property(get = __get__transforms, put = __set__transforms))::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> _transforms;

  /// @brief Field _data, offset 0x28, size 0x8
  __declspec(property(get = __get__data, put = __set__data))::GlobalNamespace::PosesRecordingData* _data;

  __declspec(property(get = get_data))::GlobalNamespace::PosesRecordingData* data;

  constexpr ::GlobalNamespace::AudioTimeSyncController*& __get__audioTimeSyncController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioTimeSyncController*> const& __get__audioTimeSyncController() const;

  constexpr void __set__audioTimeSyncController(::GlobalNamespace::AudioTimeSyncController* value);

  constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>& __get__transforms();

  constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> const& __get__transforms() const;

  constexpr void __set__transforms(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> value);

  constexpr ::GlobalNamespace::PosesRecordingData*& __get__data();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PosesRecordingData*> const& __get__data() const;

  constexpr void __set__data(::GlobalNamespace::PosesRecordingData* value);

  /// @brief Method get_data, addr 0x2301b84, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PosesRecordingData* get_data();

  /// @brief Method LateUpdate, addr 0x2301b8c, size 0x1c, virtual false, abstract: false, final false
  inline void LateUpdate();

  /// @brief Method Init, addr 0x22ff680, size 0x238, virtual false, abstract: false, final false
  inline void Init(::ArrayW<::GlobalNamespace::PoseObject*, ::Array<::GlobalNamespace::PoseObject*>*> poseObjects,
                   ::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration* externalCameraCalibration);

  /// @brief Method StartRecording, addr 0x2300034, size 0xc, virtual false, abstract: false, final false
  inline void StartRecording();

  /// @brief Method RecordTick, addr 0x2301ba8, size 0x1c8, virtual false, abstract: false, final false
  inline void RecordTick(float_t time);

  /// @brief Method StopRecording, addr 0x22fffac, size 0xc, virtual false, abstract: false, final false
  inline void StopRecording();

  static inline ::GlobalNamespace::PosesRecorder* New_ctor();

  /// @brief Method .ctor, addr 0x2301ee4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PosesRecorder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PosesRecorder(PosesRecorder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PosesRecorder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PosesRecorder(PosesRecorder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PosesRecorder();

public:
  /// @brief Field _audioTimeSyncController, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::AudioTimeSyncController* ____audioTimeSyncController;

  /// @brief Field _transforms, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> ____transforms;

  /// @brief Field _data, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::PosesRecordingData* ____data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PosesRecorder, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PosesRecorder, ____audioTimeSyncController) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PosesRecorder, ____transforms) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PosesRecorder, ____data) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PosesRecorder);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PosesRecorder*, "", "PosesRecorder");
NEED_NO_BOX(::GlobalNamespace::__PosesRecorder____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PosesRecorder____c*, "", "PosesRecorder/<>c");
