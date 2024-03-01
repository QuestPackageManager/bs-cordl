#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__VRControllersRecorder_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationBinder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VRControllersRecorder)
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
class IConstructorStringGenerator;
}
namespace GlobalNamespace {
class VRController;
}
namespace GlobalNamespace {
class __VRControllersRecorder__Keyframe;
}
namespace GlobalNamespace {
struct __VRControllersRecorder__Mode;
}
namespace GlobalNamespace {
class __VRControllersRecorder__SavedData;
}
namespace GlobalNamespace {
class __VRControllersRecorder__SavedData__KeyframeSerializable;
}
namespace GlobalNamespace {
class __VRControllersRecorder__State;
}
namespace GlobalNamespace {
class __VRControllersRecorder__State____c;
}
namespace GlobalNamespace {
class __VRControllersRecorder__TypeSerializationBinder;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::IO {
class BinaryReader;
}
namespace System::IO {
class BinaryWriter;
}
namespace System::IO {
class Stream;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryFormatter;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace System {
template <typename T1, typename T2, typename T3> struct ValueTuple_3;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class TextAsset;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct __VRControllersRecorder__Mode;
}
namespace GlobalNamespace {
class VRControllersRecorder;
}
namespace GlobalNamespace {
class __VRControllersRecorder__Keyframe;
}
namespace GlobalNamespace {
class __VRControllersRecorder__SavedData;
}
namespace GlobalNamespace {
class __VRControllersRecorder__SavedData__KeyframeSerializable;
}
namespace GlobalNamespace {
class __VRControllersRecorder__State;
}
namespace GlobalNamespace {
class __VRControllersRecorder__State____c;
}
namespace GlobalNamespace {
class __VRControllersRecorder__TypeSerializationBinder;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__VRControllersRecorder__Mode);
MARK_REF_PTR_T(::GlobalNamespace::VRControllersRecorder);
MARK_REF_PTR_T(::GlobalNamespace::__VRControllersRecorder__Keyframe);
MARK_REF_PTR_T(::GlobalNamespace::__VRControllersRecorder__SavedData);
MARK_REF_PTR_T(::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable);
MARK_REF_PTR_T(::GlobalNamespace::__VRControllersRecorder__State);
MARK_REF_PTR_T(::GlobalNamespace::__VRControllersRecorder__State____c);
MARK_REF_PTR_T(::GlobalNamespace::__VRControllersRecorder__TypeSerializationBinder);
// Type: ::TypeSerializationBinder
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::VRControllersRecorder::TypeSerializationBinder*
class CORDL_TYPE __VRControllersRecorder__TypeSerializationBinder : public ::System::Runtime::Serialization::SerializationBinder {
public:
  // Declarations
  /// @brief Method BindToType, addr 0x23effb4, size 0x84, virtual true, abstract: false, final false
  inline ::System::Type* BindToType(::StringW assemblyName, ::StringW typeName);

  static inline ::GlobalNamespace::__VRControllersRecorder__TypeSerializationBinder* New_ctor();

  /// @brief Method .ctor, addr 0x23ef314, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VRControllersRecorder__TypeSerializationBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__VRControllersRecorder__TypeSerializationBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VRControllersRecorder__TypeSerializationBinder(__VRControllersRecorder__TypeSerializationBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VRControllersRecorder__TypeSerializationBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VRControllersRecorder__TypeSerializationBinder(__VRControllersRecorder__TypeSerializationBinder const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__VRControllersRecorder__TypeSerializationBinder, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::KeyframeSerializable
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::VRControllersRecorder::SavedData::KeyframeSerializable*
class CORDL_TYPE __VRControllersRecorder__SavedData__KeyframeSerializable : public ::System::Object {
public:
  // Declarations
  /// @brief Field _time, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get__time, put = __cordl_internal_set__time)) float_t _time;

  /// @brief Field _wRot1, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__wRot1, put = __cordl_internal_set__wRot1)) float_t _wRot1;

  /// @brief Field _wRot2, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__wRot2, put = __cordl_internal_set__wRot2)) float_t _wRot2;

  /// @brief Field _wRot3, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get__wRot3, put = __cordl_internal_set__wRot3)) float_t _wRot3;

  /// @brief Field _xPos1, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__xPos1, put = __cordl_internal_set__xPos1)) float_t _xPos1;

  /// @brief Field _xPos2, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__xPos2, put = __cordl_internal_set__xPos2)) float_t _xPos2;

  /// @brief Field _xPos3, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__xPos3, put = __cordl_internal_set__xPos3)) float_t _xPos3;

  /// @brief Field _xRot1, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__xRot1, put = __cordl_internal_set__xRot1)) float_t _xRot1;

  /// @brief Field _xRot2, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__xRot2, put = __cordl_internal_set__xRot2)) float_t _xRot2;

  /// @brief Field _xRot3, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__xRot3, put = __cordl_internal_set__xRot3)) float_t _xRot3;

  /// @brief Field _yPos1, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__yPos1, put = __cordl_internal_set__yPos1)) float_t _yPos1;

  /// @brief Field _yPos2, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__yPos2, put = __cordl_internal_set__yPos2)) float_t _yPos2;

  /// @brief Field _yPos3, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__yPos3, put = __cordl_internal_set__yPos3)) float_t _yPos3;

  /// @brief Field _yRot1, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__yRot1, put = __cordl_internal_set__yRot1)) float_t _yRot1;

  /// @brief Field _yRot2, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__yRot2, put = __cordl_internal_set__yRot2)) float_t _yRot2;

  /// @brief Field _yRot3, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__yRot3, put = __cordl_internal_set__yRot3)) float_t _yRot3;

  /// @brief Field _zPos1, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__zPos1, put = __cordl_internal_set__zPos1)) float_t _zPos1;

  /// @brief Field _zPos2, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__zPos2, put = __cordl_internal_set__zPos2)) float_t _zPos2;

  /// @brief Field _zPos3, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__zPos3, put = __cordl_internal_set__zPos3)) float_t _zPos3;

  /// @brief Field _zRot1, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__zRot1, put = __cordl_internal_set__zRot1)) float_t _zRot1;

  /// @brief Field _zRot2, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__zRot2, put = __cordl_internal_set__zRot2)) float_t _zRot2;

  /// @brief Field _zRot3, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get__zRot3, put = __cordl_internal_set__zRot3)) float_t _zRot3;

  static inline ::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable* New_ctor();

  constexpr float_t const& __cordl_internal_get__time() const;

  constexpr float_t& __cordl_internal_get__time();

  constexpr float_t const& __cordl_internal_get__wRot1() const;

  constexpr float_t& __cordl_internal_get__wRot1();

  constexpr float_t const& __cordl_internal_get__wRot2() const;

  constexpr float_t& __cordl_internal_get__wRot2();

  constexpr float_t const& __cordl_internal_get__wRot3() const;

  constexpr float_t& __cordl_internal_get__wRot3();

  constexpr float_t const& __cordl_internal_get__xPos1() const;

  constexpr float_t& __cordl_internal_get__xPos1();

  constexpr float_t const& __cordl_internal_get__xPos2() const;

  constexpr float_t& __cordl_internal_get__xPos2();

  constexpr float_t const& __cordl_internal_get__xPos3() const;

  constexpr float_t& __cordl_internal_get__xPos3();

  constexpr float_t const& __cordl_internal_get__xRot1() const;

  constexpr float_t& __cordl_internal_get__xRot1();

  constexpr float_t const& __cordl_internal_get__xRot2() const;

  constexpr float_t& __cordl_internal_get__xRot2();

  constexpr float_t const& __cordl_internal_get__xRot3() const;

  constexpr float_t& __cordl_internal_get__xRot3();

  constexpr float_t const& __cordl_internal_get__yPos1() const;

  constexpr float_t& __cordl_internal_get__yPos1();

  constexpr float_t const& __cordl_internal_get__yPos2() const;

  constexpr float_t& __cordl_internal_get__yPos2();

  constexpr float_t const& __cordl_internal_get__yPos3() const;

  constexpr float_t& __cordl_internal_get__yPos3();

  constexpr float_t const& __cordl_internal_get__yRot1() const;

  constexpr float_t& __cordl_internal_get__yRot1();

  constexpr float_t const& __cordl_internal_get__yRot2() const;

  constexpr float_t& __cordl_internal_get__yRot2();

  constexpr float_t const& __cordl_internal_get__yRot3() const;

  constexpr float_t& __cordl_internal_get__yRot3();

  constexpr float_t const& __cordl_internal_get__zPos1() const;

  constexpr float_t& __cordl_internal_get__zPos1();

  constexpr float_t const& __cordl_internal_get__zPos2() const;

  constexpr float_t& __cordl_internal_get__zPos2();

  constexpr float_t const& __cordl_internal_get__zPos3() const;

  constexpr float_t& __cordl_internal_get__zPos3();

  constexpr float_t const& __cordl_internal_get__zRot1() const;

  constexpr float_t& __cordl_internal_get__zRot1();

  constexpr float_t const& __cordl_internal_get__zRot2() const;

  constexpr float_t& __cordl_internal_get__zRot2();

  constexpr float_t const& __cordl_internal_get__zRot3() const;

  constexpr float_t& __cordl_internal_get__zRot3();

  constexpr void __cordl_internal_set__time(float_t value);

  constexpr void __cordl_internal_set__wRot1(float_t value);

  constexpr void __cordl_internal_set__wRot2(float_t value);

  constexpr void __cordl_internal_set__wRot3(float_t value);

  constexpr void __cordl_internal_set__xPos1(float_t value);

  constexpr void __cordl_internal_set__xPos2(float_t value);

  constexpr void __cordl_internal_set__xPos3(float_t value);

  constexpr void __cordl_internal_set__xRot1(float_t value);

  constexpr void __cordl_internal_set__xRot2(float_t value);

  constexpr void __cordl_internal_set__xRot3(float_t value);

  constexpr void __cordl_internal_set__yPos1(float_t value);

  constexpr void __cordl_internal_set__yPos2(float_t value);

  constexpr void __cordl_internal_set__yPos3(float_t value);

  constexpr void __cordl_internal_set__yRot1(float_t value);

  constexpr void __cordl_internal_set__yRot2(float_t value);

  constexpr void __cordl_internal_set__yRot3(float_t value);

  constexpr void __cordl_internal_set__zPos1(float_t value);

  constexpr void __cordl_internal_set__zPos2(float_t value);

  constexpr void __cordl_internal_set__zPos3(float_t value);

  constexpr void __cordl_internal_set__zRot1(float_t value);

  constexpr void __cordl_internal_set__zRot2(float_t value);

  constexpr void __cordl_internal_set__zRot3(float_t value);

  /// @brief Method .ctor, addr 0x23f0038, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VRControllersRecorder__SavedData__KeyframeSerializable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__VRControllersRecorder__SavedData__KeyframeSerializable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VRControllersRecorder__SavedData__KeyframeSerializable(__VRControllersRecorder__SavedData__KeyframeSerializable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VRControllersRecorder__SavedData__KeyframeSerializable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VRControllersRecorder__SavedData__KeyframeSerializable(__VRControllersRecorder__SavedData__KeyframeSerializable const&) = delete;

  /// @brief Field _xPos1, offset: 0x10, size: 0x4, def value: None
  float_t ____xPos1;

  /// @brief Field _yPos1, offset: 0x14, size: 0x4, def value: None
  float_t ____yPos1;

  /// @brief Field _zPos1, offset: 0x18, size: 0x4, def value: None
  float_t ____zPos1;

  /// @brief Field _xPos2, offset: 0x1c, size: 0x4, def value: None
  float_t ____xPos2;

  /// @brief Field _yPos2, offset: 0x20, size: 0x4, def value: None
  float_t ____yPos2;

  /// @brief Field _zPos2, offset: 0x24, size: 0x4, def value: None
  float_t ____zPos2;

  /// @brief Field _xPos3, offset: 0x28, size: 0x4, def value: None
  float_t ____xPos3;

  /// @brief Field _yPos3, offset: 0x2c, size: 0x4, def value: None
  float_t ____yPos3;

  /// @brief Field _zPos3, offset: 0x30, size: 0x4, def value: None
  float_t ____zPos3;

  /// @brief Field _xRot1, offset: 0x34, size: 0x4, def value: None
  float_t ____xRot1;

  /// @brief Field _yRot1, offset: 0x38, size: 0x4, def value: None
  float_t ____yRot1;

  /// @brief Field _zRot1, offset: 0x3c, size: 0x4, def value: None
  float_t ____zRot1;

  /// @brief Field _wRot1, offset: 0x40, size: 0x4, def value: None
  float_t ____wRot1;

  /// @brief Field _xRot2, offset: 0x44, size: 0x4, def value: None
  float_t ____xRot2;

  /// @brief Field _yRot2, offset: 0x48, size: 0x4, def value: None
  float_t ____yRot2;

  /// @brief Field _zRot2, offset: 0x4c, size: 0x4, def value: None
  float_t ____zRot2;

  /// @brief Field _wRot2, offset: 0x50, size: 0x4, def value: None
  float_t ____wRot2;

  /// @brief Field _xRot3, offset: 0x54, size: 0x4, def value: None
  float_t ____xRot3;

  /// @brief Field _yRot3, offset: 0x58, size: 0x4, def value: None
  float_t ____yRot3;

  /// @brief Field _zRot3, offset: 0x5c, size: 0x4, def value: None
  float_t ____zRot3;

  /// @brief Field _wRot3, offset: 0x60, size: 0x4, def value: None
  float_t ____wRot3;

  /// @brief Field _time, offset: 0x64, size: 0x4, def value: None
  float_t ____time;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable, 0x68>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable, ____xPos1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable, ____yPos1) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable, ____zPos1) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable, ____xPos2) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable, ____yPos2) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable, ____zPos2) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable, ____xPos3) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable, ____yPos3) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable, ____zPos3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable, ____xRot1) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable, ____yRot1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable, ____zRot1) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable, ____wRot1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable, ____xRot2) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable, ____yRot2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable, ____zRot2) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable, ____wRot2) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable, ____xRot3) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable, ____yRot3) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable, ____zRot3) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable, ____wRot3) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable, ____time) == 0x64, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SavedData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::VRControllersRecorder::SavedData*
class CORDL_TYPE __VRControllersRecorder__SavedData : public ::System::Object {
public:
  // Declarations
  using KeyframeSerializable = ::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable;

  /// @brief Field _keyframes, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__keyframes,
                      put = __cordl_internal_set__keyframes))::ArrayW<::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable*,
                                                                      ::Array<::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable*>*> _keyframes;

  static inline ::GlobalNamespace::__VRControllersRecorder__SavedData* New_ctor();

  constexpr ::ArrayW<::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable*, ::Array<::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable*>*> const&
  __cordl_internal_get__keyframes() const;

  constexpr ::ArrayW<::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable*, ::Array<::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable*>*>&
  __cordl_internal_get__keyframes();

  constexpr void __cordl_internal_set__keyframes(
      ::ArrayW<::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable*, ::Array<::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable*>*> value);

  /// @brief Method .ctor, addr 0x23ee7c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VRControllersRecorder__SavedData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__VRControllersRecorder__SavedData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VRControllersRecorder__SavedData(__VRControllersRecorder__SavedData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VRControllersRecorder__SavedData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VRControllersRecorder__SavedData(__VRControllersRecorder__SavedData const&) = delete;

  /// @brief Field _keyframes, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable*, ::Array<::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable*>*> ____keyframes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__VRControllersRecorder__SavedData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__VRControllersRecorder__SavedData, ____keyframes) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Mode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::VRControllersRecorder::Mode
struct CORDL_TYPE __VRControllersRecorder__Mode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____VRControllersRecorder__Mode_Unwrapped
  enum struct ____VRControllersRecorder__Mode_Unwrapped : int32_t {
    __E_Record = static_cast<int32_t>(0x0),
    __E_Playback = static_cast<int32_t>(0x1),
    __E_Off = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____VRControllersRecorder__Mode_Unwrapped() const noexcept {
    return static_cast<____VRControllersRecorder__Mode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<____VRControllersRecorder__Mode_Unwrapped>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __VRControllersRecorder__Mode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __VRControllersRecorder__Mode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Off value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__VRControllersRecorder__Mode const Off;

  /// @brief Field Playback value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__VRControllersRecorder__Mode const Playback;

  /// @brief Field Record value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__VRControllersRecorder__Mode const Record;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__VRControllersRecorder__Mode, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__VRControllersRecorder__Mode, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Keyframe
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::VRControllersRecorder::Keyframe*
class CORDL_TYPE __VRControllersRecorder__Keyframe : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_headPose))::UnityEngine::Pose headPose;

  __declspec(property(get = get_leftControllerPose))::UnityEngine::Pose leftControllerPose;

  /// @brief Field pos1, offset 0x10, size 0xc
  __declspec(property(get = __cordl_internal_get_pos1, put = __cordl_internal_set_pos1))::UnityEngine::Vector3 pos1;

  /// @brief Field pos2, offset 0x1c, size 0xc
  __declspec(property(get = __cordl_internal_get_pos2, put = __cordl_internal_set_pos2))::UnityEngine::Vector3 pos2;

  /// @brief Field pos3, offset 0x28, size 0xc
  __declspec(property(get = __cordl_internal_get_pos3, put = __cordl_internal_set_pos3))::UnityEngine::Vector3 pos3;

  __declspec(property(get = get_rightControllerPose))::UnityEngine::Pose rightControllerPose;

  /// @brief Field rot1, offset 0x34, size 0x10
  __declspec(property(get = __cordl_internal_get_rot1, put = __cordl_internal_set_rot1))::UnityEngine::Quaternion rot1;

  /// @brief Field rot2, offset 0x44, size 0x10
  __declspec(property(get = __cordl_internal_get_rot2, put = __cordl_internal_set_rot2))::UnityEngine::Quaternion rot2;

  /// @brief Field rot3, offset 0x54, size 0x10
  __declspec(property(get = __cordl_internal_get_rot3, put = __cordl_internal_set_rot3))::UnityEngine::Quaternion rot3;

  /// @brief Field time, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_time, put = __cordl_internal_set_time)) float_t time;

  /// @brief Convert operator to "::GlobalNamespace::IConstructorStringGenerator"
  constexpr operator ::GlobalNamespace::IConstructorStringGenerator*() noexcept;

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::__VRControllersRecorder__Keyframe*>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::__VRControllersRecorder__Keyframe*>*() noexcept;

  /// @brief Method Equals, addr 0x23f08c4, size 0x9c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x23f06e4, size 0x1e0, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::__VRControllersRecorder__Keyframe* other);

  /// @brief Method FromSerializable, addr 0x23f016c, size 0x164, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__VRControllersRecorder__Keyframe* FromSerializable(::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable* ks);

  /// @brief Method GetHashCode, addr 0x23f0960, size 0x11c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::GlobalNamespace::__VRControllersRecorder__Keyframe* New_ctor(::UnityEngine::Pose leftController, ::UnityEngine::Pose rightController, ::UnityEngine::Pose head, float_t time);

  static inline ::GlobalNamespace::__VRControllersRecorder__Keyframe* New_ctor(::UnityEngine::Vector3 pos1, ::UnityEngine::Vector3 pos2, ::UnityEngine::Vector3 pos3, ::UnityEngine::Quaternion rot1,
                                                                               ::UnityEngine::Quaternion rot2, ::UnityEngine::Quaternion rot3, float_t time);

  /// @brief Method ReadFrom, addr 0x23f0380, size 0x184, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__VRControllersRecorder__Keyframe* ReadFrom(::System::IO::BinaryReader* reader);

  /// @brief Method ToConstructorString, addr 0x23f0504, size 0x1e0, virtual true, abstract: false, final true
  inline ::StringW ToConstructorString();

  /// @brief Method ToSerializable, addr 0x23ee7cc, size 0x98, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable* ToSerializable();

  /// @brief Method WriteTo, addr 0x23f02d0, size 0xb0, virtual false, abstract: false, final false
  inline void WriteTo(::System::IO::BinaryWriter* writer);

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_pos1() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_pos1();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_pos2() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_pos2();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_pos3() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_pos3();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_rot1() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_rot1();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_rot2() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_rot2();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_rot3() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_rot3();

  constexpr float_t const& __cordl_internal_get_time() const;

  constexpr float_t& __cordl_internal_get_time();

  constexpr void __cordl_internal_set_pos1(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_pos2(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_pos3(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_rot1(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_rot2(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_rot3(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_time(float_t value);

  /// @brief Method .ctor, addr 0x23ee354, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Pose leftController, ::UnityEngine::Pose rightController, ::UnityEngine::Pose head, float_t time);

  /// @brief Method .ctor, addr 0x23f00b8, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 pos1, ::UnityEngine::Vector3 pos2, ::UnityEngine::Vector3 pos3, ::UnityEngine::Quaternion rot1, ::UnityEngine::Quaternion rot2,
                    ::UnityEngine::Quaternion rot3, float_t time);

  /// @brief Method get_headPose, addr 0x23f0090, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Pose get_headPose();

  /// @brief Method get_leftControllerPose, addr 0x23f0040, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Pose get_leftControllerPose();

  /// @brief Method get_rightControllerPose, addr 0x23f0068, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Pose get_rightControllerPose();

  /// @brief Convert to "::GlobalNamespace::IConstructorStringGenerator"
  constexpr ::GlobalNamespace::IConstructorStringGenerator* i___GlobalNamespace__IConstructorStringGenerator() noexcept;

  /// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::__VRControllersRecorder__Keyframe*>"
  constexpr ::System::IEquatable_1<::GlobalNamespace::__VRControllersRecorder__Keyframe*>* i___System__IEquatable_1___GlobalNamespace____VRControllersRecorder__Keyframe__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VRControllersRecorder__Keyframe();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__VRControllersRecorder__Keyframe", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VRControllersRecorder__Keyframe(__VRControllersRecorder__Keyframe&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VRControllersRecorder__Keyframe", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VRControllersRecorder__Keyframe(__VRControllersRecorder__Keyframe const&) = delete;

  /// @brief Field pos1, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___pos1;

  /// @brief Field pos2, offset: 0x1c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___pos2;

  /// @brief Field pos3, offset: 0x28, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___pos3;

  /// @brief Field rot1, offset: 0x34, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___rot1;

  /// @brief Field rot2, offset: 0x44, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___rot2;

  /// @brief Field rot3, offset: 0x54, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___rot3;

  /// @brief Field time, offset: 0x64, size: 0x4, def value: None
  float_t ___time;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__VRControllersRecorder__Keyframe, 0x68>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__VRControllersRecorder__Keyframe, ___pos1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VRControllersRecorder__Keyframe, ___pos2) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VRControllersRecorder__Keyframe, ___pos3) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VRControllersRecorder__Keyframe, ___rot1) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VRControllersRecorder__Keyframe, ___rot2) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VRControllersRecorder__Keyframe, ___rot3) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VRControllersRecorder__Keyframe, ___time) == 0x64, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::VRControllersRecorder::State::<>c*
class CORDL_TYPE __VRControllersRecorder__State____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__VRControllersRecorder__State____c* __9;

  /// @brief Field <>9__12_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_0, put = setStaticF___9__12_0))::System::Action_2<::System::IO::BinaryWriter*, ::GlobalNamespace::__VRControllersRecorder__Keyframe*>* __9__12_0;

  static inline ::GlobalNamespace::__VRControllersRecorder__State____c* New_ctor();

  /// @brief Method <WriteTo>b__12_0, addr 0x23f0d94, size 0x14, virtual false, abstract: false, final false
  inline void _WriteTo_b__12_0(::System::IO::BinaryWriter* binaryWriter, ::GlobalNamespace::__VRControllersRecorder__Keyframe* keyframe);

  /// @brief Method .ctor, addr 0x23f0d8c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__VRControllersRecorder__State____c* getStaticF___9();

  static inline ::System::Action_2<::System::IO::BinaryWriter*, ::GlobalNamespace::__VRControllersRecorder__Keyframe*>* getStaticF___9__12_0();

  static inline void setStaticF___9(::GlobalNamespace::__VRControllersRecorder__State____c* value);

  static inline void setStaticF___9__12_0(::System::Action_2<::System::IO::BinaryWriter*, ::GlobalNamespace::__VRControllersRecorder__Keyframe*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VRControllersRecorder__State____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__VRControllersRecorder__State____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VRControllersRecorder__State____c(__VRControllersRecorder__State____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VRControllersRecorder__State____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VRControllersRecorder__State____c(__VRControllersRecorder__State____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__VRControllersRecorder__State____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::State
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 84, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::VRControllersRecorder::State*
class CORDL_TYPE __VRControllersRecorder__State : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::__VRControllersRecorder__State____c;

  /// @brief Field _keyframes, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__keyframes,
                      put = __cordl_internal_set__keyframes))::System::Collections::Generic::List_1<::GlobalNamespace::__VRControllersRecorder__Keyframe*>* _keyframes;

  /// @brief Field _version, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__version, put = __cordl_internal_set__version)) uint32_t _version;

  __declspec(property(get = get_keyframes))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__VRControllersRecorder__Keyframe*>* keyframes;

  /// @brief Field leftControllerOffset, offset 0x18, size 0x1c
  __declspec(property(get = __cordl_internal_get_leftControllerOffset, put = __cordl_internal_set_leftControllerOffset))::UnityEngine::Pose leftControllerOffset;

  /// @brief Field rightControllerOffset, offset 0x34, size 0x1c
  __declspec(property(get = __cordl_internal_get_rightControllerOffset, put = __cordl_internal_set_rightControllerOffset))::UnityEngine::Pose rightControllerOffset;

  __declspec(property(get = get_version)) uint32_t version;

  /// @brief Method AddKeyframe, addr 0x23ee3c4, size 0xa8, virtual false, abstract: false, final false
  inline void AddKeyframe(::GlobalNamespace::__VRControllersRecorder__Keyframe* keyframe);

  /// @brief Method FromSavedData, addr 0x23eef74, size 0x1c8, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__VRControllersRecorder__State* FromSavedData(::GlobalNamespace::__VRControllersRecorder__SavedData* data, ::UnityEngine::Pose leftControllerOffset,
                                                                                 ::UnityEngine::Pose rightControllerOffset);

  static inline ::GlobalNamespace::__VRControllersRecorder__State* New_ctor();

  static inline ::GlobalNamespace::__VRControllersRecorder__State* New_ctor(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__VRControllersRecorder__Keyframe*>* keyframes,
                                                                            ::UnityEngine::Pose leftControllerOffset, ::UnityEngine::Pose rightControllerOffset);

  static inline ::GlobalNamespace::__VRControllersRecorder__State* New_ctor(::System::Collections::Generic::List_1<::GlobalNamespace::__VRControllersRecorder__Keyframe*>* keyframes,
                                                                            ::UnityEngine::Pose leftControllerOffset, ::UnityEngine::Pose rightControllerOffset);

  static inline ::GlobalNamespace::__VRControllersRecorder__State* New_ctor(::System::Collections::Generic::List_1<::GlobalNamespace::__VRControllersRecorder__Keyframe*>* keyframes,
                                                                            ::UnityEngine::Pose leftControllerOffset, ::UnityEngine::Pose rightControllerOffset, uint32_t version);

  /// @brief Method ReadFrom, addr 0x23ef13c, size 0x14c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__VRControllersRecorder__State* ReadFrom(::System::IO::BinaryReader* reader);

  /// @brief Method Upgrade, addr 0x23f0c60, size 0xc8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__VRControllersRecorder__State* Upgrade(::UnityEngine::Pose newLeftControllerOffset, ::UnityEngine::Pose newRightControllerOffset);

  /// @brief Method WriteTo, addr 0x23ee8a4, size 0x158, virtual false, abstract: false, final false
  inline void WriteTo(::System::IO::BinaryWriter* writer);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__VRControllersRecorder__Keyframe*>*& __cordl_internal_get__keyframes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__VRControllersRecorder__Keyframe*>*> const& __cordl_internal_get__keyframes() const;

  constexpr uint32_t const& __cordl_internal_get__version() const;

  constexpr uint32_t& __cordl_internal_get__version();

  constexpr ::UnityEngine::Pose const& __cordl_internal_get_leftControllerOffset() const;

  constexpr ::UnityEngine::Pose& __cordl_internal_get_leftControllerOffset();

  constexpr ::UnityEngine::Pose const& __cordl_internal_get_rightControllerOffset() const;

  constexpr ::UnityEngine::Pose& __cordl_internal_get_rightControllerOffset();

  constexpr void __cordl_internal_set__keyframes(::System::Collections::Generic::List_1<::GlobalNamespace::__VRControllersRecorder__Keyframe*>* value);

  constexpr void __cordl_internal_set__version(uint32_t value);

  constexpr void __cordl_internal_set_leftControllerOffset(::UnityEngine::Pose value);

  constexpr void __cordl_internal_set_rightControllerOffset(::UnityEngine::Pose value);

  /// @brief Method .ctor, addr 0x23ecf50, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x23f0a7c, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__VRControllersRecorder__Keyframe*>* keyframes, ::UnityEngine::Pose leftControllerOffset,
                    ::UnityEngine::Pose rightControllerOffset);

  /// @brief Method .ctor, addr 0x23f0bd8, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::GlobalNamespace::__VRControllersRecorder__Keyframe*>* keyframes, ::UnityEngine::Pose leftControllerOffset,
                    ::UnityEngine::Pose rightControllerOffset);

  /// @brief Method .ctor, addr 0x23f0b6c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::GlobalNamespace::__VRControllersRecorder__Keyframe*>* keyframes, ::UnityEngine::Pose leftControllerOffset,
                    ::UnityEngine::Pose rightControllerOffset, uint32_t version);

  /// @brief Method get_keyframes, addr 0x23f0c50, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__VRControllersRecorder__Keyframe*>* get_keyframes();

  /// @brief Method get_version, addr 0x23f0c58, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_version();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VRControllersRecorder__State();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__VRControllersRecorder__State", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VRControllersRecorder__State(__VRControllersRecorder__State&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VRControllersRecorder__State", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VRControllersRecorder__State(__VRControllersRecorder__State const&) = delete;

  /// @brief Field _keyframes, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__VRControllersRecorder__Keyframe*>* ____keyframes;

  /// @brief Field leftControllerOffset, offset: 0x18, size: 0x1c, def value: None
  ::UnityEngine::Pose ___leftControllerOffset;

  /// @brief Field rightControllerOffset, offset: 0x34, size: 0x1c, def value: None
  ::UnityEngine::Pose ___rightControllerOffset;

  /// @brief Field _version, offset: 0x50, size: 0x4, def value: None
  uint32_t ____version;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__VRControllersRecorder__State, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__VRControllersRecorder__State, ____keyframes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VRControllersRecorder__State, ___leftControllerOffset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VRControllersRecorder__State, ___rightControllerOffset) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VRControllersRecorder__State, ____version) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::VRControllersRecorder
// SizeInfo { instance_size: 192, native_size: -1, calculated_instance_size: 192, calculated_native_size: 188, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::VRControllersRecorder*
class CORDL_TYPE VRControllersRecorder : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Keyframe = ::GlobalNamespace::__VRControllersRecorder__Keyframe;

  using Mode = ::GlobalNamespace::__VRControllersRecorder__Mode;

  using SavedData = ::GlobalNamespace::__VRControllersRecorder__SavedData;

  using State = ::GlobalNamespace::__VRControllersRecorder__State;

  using TypeSerializationBinder = ::GlobalNamespace::__VRControllersRecorder__TypeSerializationBinder;

  /// @brief Field _adjustSabersPositionBasedOnHeadPosition, offset 0x2e, size 0x1
  __declspec(property(get = __cordl_internal_get__adjustSabersPositionBasedOnHeadPosition,
                      put = __cordl_internal_set__adjustSabersPositionBasedOnHeadPosition)) bool _adjustSabersPositionBasedOnHeadPosition;

  /// @brief Field _audioTimeSyncController, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSyncController,
                      put = __cordl_internal_set__audioTimeSyncController))::UnityW<::GlobalNamespace::AudioTimeSyncController> _audioTimeSyncController;

  /// @brief Field _camera, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__camera, put = __cordl_internal_set__camera))::UnityW<::UnityEngine::Camera> _camera;

  /// @brief Field _cameraFOV, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__cameraFOV, put = __cordl_internal_set__cameraFOV)) float_t _cameraFOV;

  /// @brief Field _changeToNonVRCamera, offset 0x2d, size 0x1
  __declspec(property(get = __cordl_internal_get__changeToNonVRCamera, put = __cordl_internal_set__changeToNonVRCamera)) bool _changeToNonVRCamera;

  /// @brief Field _controller0, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__controller0, put = __cordl_internal_set__controller0))::UnityW<::GlobalNamespace::VRController> _controller0;

  /// @brief Field _controller0Transform, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__controller0Transform, put = __cordl_internal_set__controller0Transform))::UnityW<::UnityEngine::Transform> _controller0Transform;

  /// @brief Field _controller1, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__controller1, put = __cordl_internal_set__controller1))::UnityW<::GlobalNamespace::VRController> _controller1;

  /// @brief Field _controller1Transform, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__controller1Transform, put = __cordl_internal_set__controller1Transform))::UnityW<::UnityEngine::Transform> _controller1Transform;

  /// @brief Field _controllersSmooth, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__controllersSmooth, put = __cordl_internal_set__controllersSmooth)) float_t _controllersSmooth;

  /// @brief Field _controllersTimeOffset, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__controllersTimeOffset, put = __cordl_internal_set__controllersTimeOffset)) float_t _controllersTimeOffset;

  /// @brief Field _dontMoveHead, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get__dontMoveHead, put = __cordl_internal_set__dontMoveHead)) bool _dontMoveHead;

  /// @brief Field _hasController0, offset 0xa9, size 0x1
  __declspec(property(get = __cordl_internal_get__hasController0, put = __cordl_internal_set__hasController0)) bool _hasController0;

  /// @brief Field _hasController1, offset 0xaa, size 0x1
  __declspec(property(get = __cordl_internal_get__hasController1, put = __cordl_internal_set__hasController1)) bool _hasController1;

  /// @brief Field _hasHead, offset 0xa8, size 0x1
  __declspec(property(get = __cordl_internal_get__hasHead, put = __cordl_internal_set__hasHead)) bool _hasHead;

  /// @brief Field _headPositionOffset, offset 0x3c, size 0xc
  __declspec(property(get = __cordl_internal_get__headPositionOffset, put = __cordl_internal_set__headPositionOffset))::UnityEngine::Vector3 _headPositionOffset;

  /// @brief Field _headRotationOffset, offset 0x30, size 0xc
  __declspec(property(get = __cordl_internal_get__headRotationOffset, put = __cordl_internal_set__headRotationOffset))::UnityEngine::Vector3 _headRotationOffset;

  /// @brief Field _headSmooth, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__headSmooth, put = __cordl_internal_set__headSmooth)) float_t _headSmooth;

  /// @brief Field _headTransform, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__headTransform, put = __cordl_internal_set__headTransform))::UnityW<::UnityEngine::Transform> _headTransform;

  /// @brief Field _keyframeIndex, offset 0xb8, size 0x4
  __declspec(property(get = __cordl_internal_get__keyframeIndex, put = __cordl_internal_set__keyframeIndex)) int32_t _keyframeIndex;

  /// @brief Field _mode, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__mode, put = __cordl_internal_set__mode))::GlobalNamespace::__VRControllersRecorder__Mode _mode;

  /// @brief Field _originTransform, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__originTransform, put = __cordl_internal_set__originTransform))::UnityW<::UnityEngine::Transform> _originTransform;

  /// @brief Field _recorderCamera, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__recorderCamera, put = __cordl_internal_set__recorderCamera))::UnityW<::UnityEngine::Camera> _recorderCamera;

  /// @brief Field _recordingFileName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__recordingFileName, put = __cordl_internal_set__recordingFileName))::StringW _recordingFileName;

  /// @brief Field _recordingTextAsset, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__recordingTextAsset, put = __cordl_internal_set__recordingTextAsset))::UnityW<::UnityEngine::TextAsset> _recordingTextAsset;

  /// @brief Field _spawnRotationTransform, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__spawnRotationTransform, put = __cordl_internal_set__spawnRotationTransform))::UnityW<::UnityEngine::Transform> _spawnRotationTransform;

  /// @brief Field _state, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__state, put = __cordl_internal_set__state))::GlobalNamespace::__VRControllersRecorder__State* _state;

  __declspec(property(get = get_changeToNonVRCamera, put = set_changeToNonVRCamera)) bool changeToNonVRCamera;

  __declspec(property(get = get_currentPoses))::System::ValueTuple_3<::UnityEngine::Pose, ::UnityEngine::Pose, ::UnityEngine::Pose> currentPoses;

  __declspec(property(get = get_mode, put = set_mode))::GlobalNamespace::__VRControllersRecorder__Mode mode;

  __declspec(property(get = get_path))::StringW path;

  __declspec(property(get = get_recordingFileName, put = set_recordingFileName))::StringW recordingFileName;

  __declspec(property(get = get_recordingTextAsset, put = set_recordingTextAsset))::UnityW<::UnityEngine::TextAsset> recordingTextAsset;

  /// @brief Method CheckNodes, addr 0x23ec7a0, size 0x258, virtual false, abstract: false, final false
  inline void CheckNodes();

  /// @brief Method CreateAnimationClipFromRecording, addr 0x23ef350, size 0xbf8, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::AnimationClip> CreateAnimationClipFromRecording(::StringW recordingFilePath);

  /// @brief Method GetBinaryFormatter, addr 0x23ef288, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* GetBinaryFormatter();

  /// @brief Method GetSavedData, addr 0x23ee590, size 0x234, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__VRControllersRecorder__SavedData* GetSavedData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__VRControllersRecorder__Keyframe*>* keyframes);

  /// @brief Method HandleControllerAnchorUpdate, addr 0x23ecfd0, size 0x194, virtual false, abstract: false, final false
  inline void HandleControllerAnchorUpdate(::GlobalNamespace::VRController* controller, ::UnityEngine::Pose poseOffset);

  /// @brief Method LateUpdate, addr 0x23ee550, size 0x10, virtual false, abstract: false, final false
  inline void LateUpdate();

  /// @brief Method Load, addr 0x23ec9f8, size 0x558, virtual false, abstract: false, final false
  inline bool Load();

  /// @brief Method LoadSavedData, addr 0x23eeee4, size 0x90, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__VRControllersRecorder__SavedData* LoadSavedData(::System::IO::Stream* dataStream);

  /// @brief Method LoadState, addr 0x23eea48, size 0x98, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__VRControllersRecorder__State* LoadState(::System::IO::Stream* stream);

  /// @brief Method LoadState, addr 0x23eeb94, size 0x2b0, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__VRControllersRecorder__State* LoadState(::System::IO::Stream* stream, ::UnityEngine::Pose leftControllerOffset, ::UnityEngine::Pose rightControllerOffset);

  /// @brief Method LoadStateWithDefaultOffset, addr 0x23eee44, size 0xa0, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__VRControllersRecorder__State* LoadStateWithDefaultOffset(::System::IO::Stream* stream);

  static inline ::GlobalNamespace::VRControllersRecorder* New_ctor();

  /// @brief Method OnDestroy, addr 0x23ed164, size 0xec, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method PlaybackTick, addr 0x23ed700, size 0x7c8, virtual false, abstract: false, final false
  inline void PlaybackTick();

  /// @brief Method ReadHeader, addr 0x23ee9fc, size 0x4c, virtual false, abstract: false, final false
  static inline uint32_t ReadHeader(::System::IO::BinaryReader* reader);

  /// @brief Method RecordTick, addr 0x23edfcc, size 0x388, virtual false, abstract: false, final false
  inline void RecordTick();

  /// @brief Method Save, addr 0x23ed250, size 0x3a8, virtual false, abstract: false, final false
  inline void Save();

  /// @brief Method SerializeSavedData, addr 0x23ef31c, size 0x34, virtual false, abstract: false, final false
  static inline void SerializeSavedData(::System::IO::Stream* dataStream, ::GlobalNamespace::__VRControllersRecorder__SavedData* savedData);

  /// @brief Method SetDefaultSettings, addr 0x23ed5f8, size 0x84, virtual false, abstract: false, final false
  inline void SetDefaultSettings();

  /// @brief Method SetInGamePlaybackDefaultSettings, addr 0x23ed67c, size 0x84, virtual false, abstract: false, final false
  inline void SetInGamePlaybackDefaultSettings();

  /// @brief Method SetPositionAndRotation, addr 0x23edec8, size 0x104, virtual false, abstract: false, final false
  inline void SetPositionAndRotation(::UnityEngine::Transform* transf, ::UnityEngine::Vector3 targetPos, ::UnityEngine::Quaternion targetRot, float_t t);

  /// @brief Method Start, addr 0x23ec144, size 0x65c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x23ee46c, size 0xe4, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method WriteHeader, addr 0x23ee864, size 0x40, virtual false, abstract: false, final false
  static inline void WriteHeader(::System::IO::BinaryWriter* writer);

  /// @brief Method WriteTo, addr 0x23ee560, size 0x30, virtual false, abstract: false, final false
  static inline void WriteTo(::System::IO::BinaryWriter* writer, ::GlobalNamespace::__VRControllersRecorder__State* state);

  constexpr bool const& __cordl_internal_get__adjustSabersPositionBasedOnHeadPosition() const;

  constexpr bool& __cordl_internal_get__adjustSabersPositionBasedOnHeadPosition();

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& __cordl_internal_get__audioTimeSyncController() const;

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& __cordl_internal_get__audioTimeSyncController();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__camera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__camera();

  constexpr float_t const& __cordl_internal_get__cameraFOV() const;

  constexpr float_t& __cordl_internal_get__cameraFOV();

  constexpr bool const& __cordl_internal_get__changeToNonVRCamera() const;

  constexpr bool& __cordl_internal_get__changeToNonVRCamera();

  constexpr ::UnityW<::GlobalNamespace::VRController> const& __cordl_internal_get__controller0() const;

  constexpr ::UnityW<::GlobalNamespace::VRController>& __cordl_internal_get__controller0();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__controller0Transform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__controller0Transform();

  constexpr ::UnityW<::GlobalNamespace::VRController> const& __cordl_internal_get__controller1() const;

  constexpr ::UnityW<::GlobalNamespace::VRController>& __cordl_internal_get__controller1();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__controller1Transform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__controller1Transform();

  constexpr float_t const& __cordl_internal_get__controllersSmooth() const;

  constexpr float_t& __cordl_internal_get__controllersSmooth();

  constexpr float_t const& __cordl_internal_get__controllersTimeOffset() const;

  constexpr float_t& __cordl_internal_get__controllersTimeOffset();

  constexpr bool const& __cordl_internal_get__dontMoveHead() const;

  constexpr bool& __cordl_internal_get__dontMoveHead();

  constexpr bool const& __cordl_internal_get__hasController0() const;

  constexpr bool& __cordl_internal_get__hasController0();

  constexpr bool const& __cordl_internal_get__hasController1() const;

  constexpr bool& __cordl_internal_get__hasController1();

  constexpr bool const& __cordl_internal_get__hasHead() const;

  constexpr bool& __cordl_internal_get__hasHead();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__headPositionOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__headPositionOffset();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__headRotationOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__headRotationOffset();

  constexpr float_t const& __cordl_internal_get__headSmooth() const;

  constexpr float_t& __cordl_internal_get__headSmooth();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__headTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__headTransform();

  constexpr int32_t const& __cordl_internal_get__keyframeIndex() const;

  constexpr int32_t& __cordl_internal_get__keyframeIndex();

  constexpr ::GlobalNamespace::__VRControllersRecorder__Mode const& __cordl_internal_get__mode() const;

  constexpr ::GlobalNamespace::__VRControllersRecorder__Mode& __cordl_internal_get__mode();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__originTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__originTransform();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__recorderCamera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__recorderCamera();

  constexpr ::StringW const& __cordl_internal_get__recordingFileName() const;

  constexpr ::StringW& __cordl_internal_get__recordingFileName();

  constexpr ::UnityW<::UnityEngine::TextAsset> const& __cordl_internal_get__recordingTextAsset() const;

  constexpr ::UnityW<::UnityEngine::TextAsset>& __cordl_internal_get__recordingTextAsset();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__spawnRotationTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__spawnRotationTransform();

  constexpr ::GlobalNamespace::__VRControllersRecorder__State*& __cordl_internal_get__state();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__VRControllersRecorder__State*> const& __cordl_internal_get__state() const;

  constexpr void __cordl_internal_set__adjustSabersPositionBasedOnHeadPosition(bool value);

  constexpr void __cordl_internal_set__audioTimeSyncController(::UnityW<::GlobalNamespace::AudioTimeSyncController> value);

  constexpr void __cordl_internal_set__camera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set__cameraFOV(float_t value);

  constexpr void __cordl_internal_set__changeToNonVRCamera(bool value);

  constexpr void __cordl_internal_set__controller0(::UnityW<::GlobalNamespace::VRController> value);

  constexpr void __cordl_internal_set__controller0Transform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__controller1(::UnityW<::GlobalNamespace::VRController> value);

  constexpr void __cordl_internal_set__controller1Transform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__controllersSmooth(float_t value);

  constexpr void __cordl_internal_set__controllersTimeOffset(float_t value);

  constexpr void __cordl_internal_set__dontMoveHead(bool value);

  constexpr void __cordl_internal_set__hasController0(bool value);

  constexpr void __cordl_internal_set__hasController1(bool value);

  constexpr void __cordl_internal_set__hasHead(bool value);

  constexpr void __cordl_internal_set__headPositionOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__headRotationOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__headSmooth(float_t value);

  constexpr void __cordl_internal_set__headTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__keyframeIndex(int32_t value);

  constexpr void __cordl_internal_set__mode(::GlobalNamespace::__VRControllersRecorder__Mode value);

  constexpr void __cordl_internal_set__originTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__recorderCamera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set__recordingFileName(::StringW value);

  constexpr void __cordl_internal_set__recordingTextAsset(::UnityW<::UnityEngine::TextAsset> value);

  constexpr void __cordl_internal_set__spawnRotationTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__state(::GlobalNamespace::__VRControllersRecorder__State* value);

  /// @brief Method .ctor, addr 0x23eff48, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_changeToNonVRCamera, addr 0x23ec13c, size 0x8, virtual false, abstract: false, final false
  inline bool get_changeToNonVRCamera();

  /// @brief Method get_currentPoses, addr 0x23ebef0, size 0x210, virtual false, abstract: false, final false
  inline ::System::ValueTuple_3<::UnityEngine::Pose, ::UnityEngine::Pose, ::UnityEngine::Pose> get_currentPoses();

  /// @brief Method get_mode, addr 0x23ec108, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__VRControllersRecorder__Mode get_mode();

  /// @brief Method get_path, addr 0x23eeae0, size 0xb4, virtual false, abstract: false, final false
  inline ::StringW get_path();

  /// @brief Method get_recordingFileName, addr 0x23ec128, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_recordingFileName();

  /// @brief Method get_recordingTextAsset, addr 0x23ec118, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::TextAsset> get_recordingTextAsset();

  /// @brief Method set_changeToNonVRCamera, addr 0x23ec130, size 0xc, virtual false, abstract: false, final false
  inline void set_changeToNonVRCamera(bool value);

  /// @brief Method set_mode, addr 0x23ec100, size 0x8, virtual false, abstract: false, final false
  inline void set_mode(::GlobalNamespace::__VRControllersRecorder__Mode value);

  /// @brief Method set_recordingFileName, addr 0x23ec120, size 0x8, virtual false, abstract: false, final false
  inline void set_recordingFileName(::StringW value);

  /// @brief Method set_recordingTextAsset, addr 0x23ec110, size 0x8, virtual false, abstract: false, final false
  inline void set_recordingTextAsset(::UnityEngine::TextAsset* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VRControllersRecorder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VRControllersRecorder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VRControllersRecorder(VRControllersRecorder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VRControllersRecorder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VRControllersRecorder(VRControllersRecorder const&) = delete;

  /// @brief Field _recordingTextAsset, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextAsset> ____recordingTextAsset;

  /// @brief Field _recordingFileName, offset: 0x20, size: 0x8, def value: None
  ::StringW ____recordingFileName;

  /// @brief Field _mode, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::__VRControllersRecorder__Mode ____mode;

  /// @brief Field _dontMoveHead, offset: 0x2c, size: 0x1, def value: None
  bool ____dontMoveHead;

  /// @brief Field _changeToNonVRCamera, offset: 0x2d, size: 0x1, def value: None
  bool ____changeToNonVRCamera;

  /// @brief Field _adjustSabersPositionBasedOnHeadPosition, offset: 0x2e, size: 0x1, def value: None
  bool ____adjustSabersPositionBasedOnHeadPosition;

  /// @brief Field _headRotationOffset, offset: 0x30, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____headRotationOffset;

  /// @brief Field _headPositionOffset, offset: 0x3c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____headPositionOffset;

  /// @brief Field _headSmooth, offset: 0x48, size: 0x4, def value: None
  float_t ____headSmooth;

  /// @brief Field _cameraFOV, offset: 0x4c, size: 0x4, def value: None
  float_t ____cameraFOV;

  /// @brief Field _controllersTimeOffset, offset: 0x50, size: 0x4, def value: None
  float_t ____controllersTimeOffset;

  /// @brief Field _controllersSmooth, offset: 0x54, size: 0x4, def value: None
  float_t ____controllersSmooth;

  /// @brief Field _controller0, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::VRController> ____controller0;

  /// @brief Field _controller1, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::VRController> ____controller1;

  /// @brief Field _headTransform, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____headTransform;

  /// @brief Field _camera, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ____camera;

  /// @brief Field _recorderCamera, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ____recorderCamera;

  /// @brief Field _spawnRotationTransform, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____spawnRotationTransform;

  /// @brief Field _originTransform, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____originTransform;

  /// @brief Field _audioTimeSyncController, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioTimeSyncController> ____audioTimeSyncController;

  /// @brief Field _controller0Transform, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____controller0Transform;

  /// @brief Field _controller1Transform, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____controller1Transform;

  /// @brief Field _hasHead, offset: 0xa8, size: 0x1, def value: None
  bool ____hasHead;

  /// @brief Field _hasController0, offset: 0xa9, size: 0x1, def value: None
  bool ____hasController0;

  /// @brief Field _hasController1, offset: 0xaa, size: 0x1, def value: None
  bool ____hasController1;

  /// @brief Field _state, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::__VRControllersRecorder__State* ____state;

  /// @brief Field _keyframeIndex, offset: 0xb8, size: 0x4, def value: None
  int32_t ____keyframeIndex;

  /// @brief Field kHeaderChar offset 0xffffffff size 0x2
  static constexpr char16_t kHeaderChar{ u'v' };

  /// @brief Field kRecorderVersion offset 0xffffffff size 0x4
  static constexpr uint32_t kRecorderVersion{ static_cast<uint32_t>(0x7601u) };

  /// @brief Field kSavedDataRecorderVersion offset 0xffffffff size 0x4
  static constexpr uint32_t kSavedDataRecorderVersion{ static_cast<uint32_t>(0x76010100u) };

  /// @brief Field kSavedDataWithOffsetRecorderVersion offset 0xffffffff size 0x4
  static constexpr uint32_t kSavedDataWithOffsetRecorderVersion{ static_cast<uint32_t>(0x760101u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VRControllersRecorder, 0xc0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::VRControllersRecorder, ____recordingTextAsset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRControllersRecorder, ____recordingFileName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRControllersRecorder, ____mode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRControllersRecorder, ____dontMoveHead) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRControllersRecorder, ____changeToNonVRCamera) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRControllersRecorder, ____adjustSabersPositionBasedOnHeadPosition) == 0x2e, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRControllersRecorder, ____headRotationOffset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRControllersRecorder, ____headPositionOffset) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRControllersRecorder, ____headSmooth) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRControllersRecorder, ____cameraFOV) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRControllersRecorder, ____controllersTimeOffset) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRControllersRecorder, ____controllersSmooth) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRControllersRecorder, ____controller0) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRControllersRecorder, ____controller1) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRControllersRecorder, ____headTransform) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRControllersRecorder, ____camera) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRControllersRecorder, ____recorderCamera) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRControllersRecorder, ____spawnRotationTransform) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRControllersRecorder, ____originTransform) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRControllersRecorder, ____audioTimeSyncController) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRControllersRecorder, ____controller0Transform) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRControllersRecorder, ____controller1Transform) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRControllersRecorder, ____hasHead) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRControllersRecorder, ____hasController0) == 0xa9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRControllersRecorder, ____hasController1) == 0xaa, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRControllersRecorder, ____state) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRControllersRecorder, ____keyframeIndex) == 0xb8, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__VRControllersRecorder__Mode, "", "VRControllersRecorder/Mode");
NEED_NO_BOX(::GlobalNamespace::VRControllersRecorder);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VRControllersRecorder*, "", "VRControllersRecorder");
NEED_NO_BOX(::GlobalNamespace::__VRControllersRecorder__Keyframe);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__VRControllersRecorder__Keyframe*, "", "VRControllersRecorder/Keyframe");
NEED_NO_BOX(::GlobalNamespace::__VRControllersRecorder__SavedData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__VRControllersRecorder__SavedData*, "", "VRControllersRecorder/SavedData");
NEED_NO_BOX(::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable*, "", "VRControllersRecorder/SavedData/KeyframeSerializable");
NEED_NO_BOX(::GlobalNamespace::__VRControllersRecorder__State);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__VRControllersRecorder__State*, "", "VRControllersRecorder/State");
NEED_NO_BOX(::GlobalNamespace::__VRControllersRecorder__State____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__VRControllersRecorder__State____c*, "", "VRControllersRecorder/State/<>c");
NEED_NO_BOX(::GlobalNamespace::__VRControllersRecorder__TypeSerializationBinder);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__VRControllersRecorder__TypeSerializationBinder*, "", "VRControllersRecorder/TypeSerializationBinder");
