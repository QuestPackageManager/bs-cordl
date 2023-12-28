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
namespace System {
template <typename T1, typename T2, typename T3> struct ValueTuple_3;
}
namespace System::IO {
class BinaryWriter;
}
namespace GlobalNamespace {
class __VRControllersRecorder__Keyframe;
}
namespace UnityEngine {
class Camera;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryFormatter;
}
namespace GlobalNamespace {
class __VRControllersRecorder__SavedData;
}
namespace UnityEngine {
struct Pose;
}
namespace GlobalNamespace {
class __VRControllersRecorder__TypeSerializationBinder;
}
namespace UnityEngine {
class TextAsset;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class AnimationClip;
}
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace System::IO {
class BinaryReader;
}
namespace GlobalNamespace {
class __VRControllersRecorder__State;
}
namespace GlobalNamespace {
class VRController;
}
namespace UnityEngine {
struct Vector3;
}
namespace System::IO {
class Stream;
}
namespace GlobalNamespace {
struct __VRControllersRecorder__Mode;
}
namespace UnityEngine {
struct Quaternion;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace GlobalNamespace {
class IConstructorStringGenerator;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace GlobalNamespace {
class __VRControllersRecorder__SavedData__KeyframeSerializable;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
class __VRControllersRecorder__State____c;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class Type;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3206))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5840))
// CS Name: ::VRControllersRecorder::TypeSerializationBinder*
class CORDL_TYPE __VRControllersRecorder__TypeSerializationBinder : public ::System::Runtime::Serialization::SerializationBinder {
public:
  // Declarations
  /// @brief Method BindToType addr 0x22f2ddc size 0x84 virtual true final false
  inline ::System::Type* BindToType(::StringW assemblyName, ::StringW typeName);

  static inline ::GlobalNamespace::__VRControllersRecorder__TypeSerializationBinder* New_ctor();

  /// @brief Method .ctor addr 0x22f213c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__VRControllersRecorder__TypeSerializationBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VRControllersRecorder__TypeSerializationBinder(__VRControllersRecorder__TypeSerializationBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VRControllersRecorder__TypeSerializationBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VRControllersRecorder__TypeSerializationBinder(__VRControllersRecorder__TypeSerializationBinder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VRControllersRecorder__TypeSerializationBinder();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__VRControllersRecorder__TypeSerializationBinder, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::KeyframeSerializable
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5841))
// CS Name: ::VRControllersRecorder::SavedData::KeyframeSerializable*
class CORDL_TYPE __VRControllersRecorder__SavedData__KeyframeSerializable : public ::System::Object {
public:
  // Declarations
  /// @brief Field _xPos1, offset 0x10, size 0x4
  __declspec(property(get = __get__xPos1, put = __set__xPos1)) float_t _xPos1;

  /// @brief Field _yPos1, offset 0x14, size 0x4
  __declspec(property(get = __get__yPos1, put = __set__yPos1)) float_t _yPos1;

  /// @brief Field _zPos1, offset 0x18, size 0x4
  __declspec(property(get = __get__zPos1, put = __set__zPos1)) float_t _zPos1;

  /// @brief Field _xPos2, offset 0x1c, size 0x4
  __declspec(property(get = __get__xPos2, put = __set__xPos2)) float_t _xPos2;

  /// @brief Field _yPos2, offset 0x20, size 0x4
  __declspec(property(get = __get__yPos2, put = __set__yPos2)) float_t _yPos2;

  /// @brief Field _zPos2, offset 0x24, size 0x4
  __declspec(property(get = __get__zPos2, put = __set__zPos2)) float_t _zPos2;

  /// @brief Field _xPos3, offset 0x28, size 0x4
  __declspec(property(get = __get__xPos3, put = __set__xPos3)) float_t _xPos3;

  /// @brief Field _yPos3, offset 0x2c, size 0x4
  __declspec(property(get = __get__yPos3, put = __set__yPos3)) float_t _yPos3;

  /// @brief Field _zPos3, offset 0x30, size 0x4
  __declspec(property(get = __get__zPos3, put = __set__zPos3)) float_t _zPos3;

  /// @brief Field _xRot1, offset 0x34, size 0x4
  __declspec(property(get = __get__xRot1, put = __set__xRot1)) float_t _xRot1;

  /// @brief Field _yRot1, offset 0x38, size 0x4
  __declspec(property(get = __get__yRot1, put = __set__yRot1)) float_t _yRot1;

  /// @brief Field _zRot1, offset 0x3c, size 0x4
  __declspec(property(get = __get__zRot1, put = __set__zRot1)) float_t _zRot1;

  /// @brief Field _wRot1, offset 0x40, size 0x4
  __declspec(property(get = __get__wRot1, put = __set__wRot1)) float_t _wRot1;

  /// @brief Field _xRot2, offset 0x44, size 0x4
  __declspec(property(get = __get__xRot2, put = __set__xRot2)) float_t _xRot2;

  /// @brief Field _yRot2, offset 0x48, size 0x4
  __declspec(property(get = __get__yRot2, put = __set__yRot2)) float_t _yRot2;

  /// @brief Field _zRot2, offset 0x4c, size 0x4
  __declspec(property(get = __get__zRot2, put = __set__zRot2)) float_t _zRot2;

  /// @brief Field _wRot2, offset 0x50, size 0x4
  __declspec(property(get = __get__wRot2, put = __set__wRot2)) float_t _wRot2;

  /// @brief Field _xRot3, offset 0x54, size 0x4
  __declspec(property(get = __get__xRot3, put = __set__xRot3)) float_t _xRot3;

  /// @brief Field _yRot3, offset 0x58, size 0x4
  __declspec(property(get = __get__yRot3, put = __set__yRot3)) float_t _yRot3;

  /// @brief Field _zRot3, offset 0x5c, size 0x4
  __declspec(property(get = __get__zRot3, put = __set__zRot3)) float_t _zRot3;

  /// @brief Field _wRot3, offset 0x60, size 0x4
  __declspec(property(get = __get__wRot3, put = __set__wRot3)) float_t _wRot3;

  /// @brief Field _time, offset 0x64, size 0x4
  __declspec(property(get = __get__time, put = __set__time)) float_t _time;

  constexpr float_t& __get__xPos1();

  constexpr float_t const& __get__xPos1() const;

  constexpr void __set__xPos1(float_t value);

  constexpr float_t& __get__yPos1();

  constexpr float_t const& __get__yPos1() const;

  constexpr void __set__yPos1(float_t value);

  constexpr float_t& __get__zPos1();

  constexpr float_t const& __get__zPos1() const;

  constexpr void __set__zPos1(float_t value);

  constexpr float_t& __get__xPos2();

  constexpr float_t const& __get__xPos2() const;

  constexpr void __set__xPos2(float_t value);

  constexpr float_t& __get__yPos2();

  constexpr float_t const& __get__yPos2() const;

  constexpr void __set__yPos2(float_t value);

  constexpr float_t& __get__zPos2();

  constexpr float_t const& __get__zPos2() const;

  constexpr void __set__zPos2(float_t value);

  constexpr float_t& __get__xPos3();

  constexpr float_t const& __get__xPos3() const;

  constexpr void __set__xPos3(float_t value);

  constexpr float_t& __get__yPos3();

  constexpr float_t const& __get__yPos3() const;

  constexpr void __set__yPos3(float_t value);

  constexpr float_t& __get__zPos3();

  constexpr float_t const& __get__zPos3() const;

  constexpr void __set__zPos3(float_t value);

  constexpr float_t& __get__xRot1();

  constexpr float_t const& __get__xRot1() const;

  constexpr void __set__xRot1(float_t value);

  constexpr float_t& __get__yRot1();

  constexpr float_t const& __get__yRot1() const;

  constexpr void __set__yRot1(float_t value);

  constexpr float_t& __get__zRot1();

  constexpr float_t const& __get__zRot1() const;

  constexpr void __set__zRot1(float_t value);

  constexpr float_t& __get__wRot1();

  constexpr float_t const& __get__wRot1() const;

  constexpr void __set__wRot1(float_t value);

  constexpr float_t& __get__xRot2();

  constexpr float_t const& __get__xRot2() const;

  constexpr void __set__xRot2(float_t value);

  constexpr float_t& __get__yRot2();

  constexpr float_t const& __get__yRot2() const;

  constexpr void __set__yRot2(float_t value);

  constexpr float_t& __get__zRot2();

  constexpr float_t const& __get__zRot2() const;

  constexpr void __set__zRot2(float_t value);

  constexpr float_t& __get__wRot2();

  constexpr float_t const& __get__wRot2() const;

  constexpr void __set__wRot2(float_t value);

  constexpr float_t& __get__xRot3();

  constexpr float_t const& __get__xRot3() const;

  constexpr void __set__xRot3(float_t value);

  constexpr float_t& __get__yRot3();

  constexpr float_t const& __get__yRot3() const;

  constexpr void __set__yRot3(float_t value);

  constexpr float_t& __get__zRot3();

  constexpr float_t const& __get__zRot3() const;

  constexpr void __set__zRot3(float_t value);

  constexpr float_t& __get__wRot3();

  constexpr float_t const& __get__wRot3() const;

  constexpr void __set__wRot3(float_t value);

  constexpr float_t& __get__time();

  constexpr float_t const& __get__time() const;

  constexpr void __set__time(float_t value);

  static inline ::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable* New_ctor();

  /// @brief Method .ctor addr 0x22f2e60 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__VRControllersRecorder__SavedData__KeyframeSerializable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VRControllersRecorder__SavedData__KeyframeSerializable(__VRControllersRecorder__SavedData__KeyframeSerializable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VRControllersRecorder__SavedData__KeyframeSerializable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VRControllersRecorder__SavedData__KeyframeSerializable(__VRControllersRecorder__SavedData__KeyframeSerializable const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VRControllersRecorder__SavedData__KeyframeSerializable();

public:
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

} // namespace GlobalNamespace
// Type: ::SavedData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5842))
// CS Name: ::VRControllersRecorder::SavedData*
class CORDL_TYPE __VRControllersRecorder__SavedData : public ::System::Object {
public:
  // Declarations
  using KeyframeSerializable = ::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable;

  /// @brief Field _keyframes, offset 0x10, size 0x8
  __declspec(property(get = __get__keyframes, put = __set__keyframes))::ArrayW<::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable*,
                                                                               ::Array<::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable*>*> _keyframes;

  constexpr ::ArrayW<::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable*, ::Array<::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable*>*>&
  __get__keyframes();

  constexpr ::ArrayW<::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable*, ::Array<::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable*>*> const&
  __get__keyframes() const;

  constexpr void __set__keyframes(
      ::ArrayW<::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable*, ::Array<::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable*>*> value);

  static inline ::GlobalNamespace::__VRControllersRecorder__SavedData* New_ctor();

  /// @brief Method .ctor addr 0x22f15ec size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__VRControllersRecorder__SavedData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VRControllersRecorder__SavedData(__VRControllersRecorder__SavedData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VRControllersRecorder__SavedData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VRControllersRecorder__SavedData(__VRControllersRecorder__SavedData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VRControllersRecorder__SavedData();

public:
  /// @brief Field _keyframes, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable*, ::Array<::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable*>*> ____keyframes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__VRControllersRecorder__SavedData, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Mode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5843))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __VRControllersRecorder__Mode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __VRControllersRecorder__Mode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Record value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__VRControllersRecorder__Mode const Record;

  /// @brief Field Playback value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__VRControllersRecorder__Mode const Playback;

  /// @brief Field Off value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__VRControllersRecorder__Mode const Off;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__VRControllersRecorder__Mode, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Keyframe
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10252)), TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10249))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5844))
// CS Name: ::VRControllersRecorder::Keyframe*
class CORDL_TYPE __VRControllersRecorder__Keyframe : public ::System::Object {
public:
  // Declarations
  /// @brief Field pos1, offset 0x10, size 0xc
  __declspec(property(get = __get_pos1, put = __set_pos1))::UnityEngine::Vector3 pos1;

  /// @brief Field pos2, offset 0x1c, size 0xc
  __declspec(property(get = __get_pos2, put = __set_pos2))::UnityEngine::Vector3 pos2;

  /// @brief Field pos3, offset 0x28, size 0xc
  __declspec(property(get = __get_pos3, put = __set_pos3))::UnityEngine::Vector3 pos3;

  /// @brief Field rot1, offset 0x34, size 0x10
  __declspec(property(get = __get_rot1, put = __set_rot1))::UnityEngine::Quaternion rot1;

  /// @brief Field rot2, offset 0x44, size 0x10
  __declspec(property(get = __get_rot2, put = __set_rot2))::UnityEngine::Quaternion rot2;

  /// @brief Field rot3, offset 0x54, size 0x10
  __declspec(property(get = __get_rot3, put = __set_rot3))::UnityEngine::Quaternion rot3;

  /// @brief Field time, offset 0x64, size 0x4
  __declspec(property(get = __get_time, put = __set_time)) float_t time;

  __declspec(property(get = get_leftControllerPose))::UnityEngine::Pose leftControllerPose;

  __declspec(property(get = get_rightControllerPose))::UnityEngine::Pose rightControllerPose;

  __declspec(property(get = get_headPose))::UnityEngine::Pose headPose;

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::__VRControllersRecorder__Keyframe*>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::__VRControllersRecorder__Keyframe*>*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IConstructorStringGenerator"
  constexpr operator ::GlobalNamespace::IConstructorStringGenerator*() noexcept;

  constexpr ::UnityEngine::Vector3& __get_pos1();

  constexpr ::UnityEngine::Vector3 const& __get_pos1() const;

  constexpr void __set_pos1(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get_pos2();

  constexpr ::UnityEngine::Vector3 const& __get_pos2() const;

  constexpr void __set_pos2(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get_pos3();

  constexpr ::UnityEngine::Vector3 const& __get_pos3() const;

  constexpr void __set_pos3(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Quaternion& __get_rot1();

  constexpr ::UnityEngine::Quaternion const& __get_rot1() const;

  constexpr void __set_rot1(::UnityEngine::Quaternion value);

  constexpr ::UnityEngine::Quaternion& __get_rot2();

  constexpr ::UnityEngine::Quaternion const& __get_rot2() const;

  constexpr void __set_rot2(::UnityEngine::Quaternion value);

  constexpr ::UnityEngine::Quaternion& __get_rot3();

  constexpr ::UnityEngine::Quaternion const& __get_rot3() const;

  constexpr void __set_rot3(::UnityEngine::Quaternion value);

  constexpr float_t& __get_time();

  constexpr float_t const& __get_time() const;

  constexpr void __set_time(float_t value);

  /// @brief Method get_leftControllerPose addr 0x22f2e68 size 0x28 virtual false final false
  inline ::UnityEngine::Pose get_leftControllerPose();

  /// @brief Method get_rightControllerPose addr 0x22f2e90 size 0x28 virtual false final false
  inline ::UnityEngine::Pose get_rightControllerPose();

  /// @brief Method get_headPose addr 0x22f2eb8 size 0x28 virtual false final false
  inline ::UnityEngine::Pose get_headPose();

  static inline ::GlobalNamespace::__VRControllersRecorder__Keyframe* New_ctor(::UnityEngine::Pose leftController, ::UnityEngine::Pose rightController, ::UnityEngine::Pose head, float_t time);

  /// @brief Method .ctor addr 0x22f117c size 0x70 virtual false final false
  inline void _ctor(::UnityEngine::Pose leftController, ::UnityEngine::Pose rightController, ::UnityEngine::Pose head, float_t time);

  static inline ::GlobalNamespace::__VRControllersRecorder__Keyframe* New_ctor(::UnityEngine::Vector3 pos1, ::UnityEngine::Vector3 pos2, ::UnityEngine::Vector3 pos3, ::UnityEngine::Quaternion rot1,
                                                                               ::UnityEngine::Quaternion rot2, ::UnityEngine::Quaternion rot3, float_t time);

  /// @brief Method .ctor addr 0x22f2ee0 size 0xb4 virtual false final false
  inline void _ctor(::UnityEngine::Vector3 pos1, ::UnityEngine::Vector3 pos2, ::UnityEngine::Vector3 pos3, ::UnityEngine::Quaternion rot1, ::UnityEngine::Quaternion rot2,
                    ::UnityEngine::Quaternion rot3, float_t time);

  /// @brief Method ToSerializable addr 0x22f15f4 size 0x98 virtual false final false
  inline ::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable* ToSerializable();

  /// @brief Method FromSerializable addr 0x22f2f94 size 0x164 virtual false final false
  static inline ::GlobalNamespace::__VRControllersRecorder__Keyframe* FromSerializable(::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable* ks);

  /// @brief Method WriteTo addr 0x22f30f8 size 0xb0 virtual false final false
  inline void WriteTo(::System::IO::BinaryWriter* writer);

  /// @brief Method ReadFrom addr 0x22f31a8 size 0x184 virtual false final false
  static inline ::GlobalNamespace::__VRControllersRecorder__Keyframe* ReadFrom(::System::IO::BinaryReader* reader);

  /// @brief Method ToConstructorString addr 0x22f332c size 0x1e0 virtual true final true
  inline ::StringW ToConstructorString();

  /// @brief Method Equals addr 0x22f350c size 0x1e0 virtual true final true
  inline bool Equals(::GlobalNamespace::__VRControllersRecorder__Keyframe* other);

  /// @brief Method Equals addr 0x22f36ec size 0x9c virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x22f3788 size 0x11c virtual true final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "", ty: "__VRControllersRecorder__Keyframe", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VRControllersRecorder__Keyframe(__VRControllersRecorder__Keyframe&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VRControllersRecorder__Keyframe", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VRControllersRecorder__Keyframe(__VRControllersRecorder__Keyframe const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VRControllersRecorder__Keyframe();

public:
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

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5845))
// CS Name: ::VRControllersRecorder::State::<>c*
class CORDL_TYPE __VRControllersRecorder__State____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__VRControllersRecorder__State____c* __9;

  /// @brief Field <>9__12_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_0, put = setStaticF___9__12_0))::System::Action_2<::System::IO::BinaryWriter*, ::GlobalNamespace::__VRControllersRecorder__Keyframe*>* __9__12_0;

  static inline void setStaticF___9(::GlobalNamespace::__VRControllersRecorder__State____c* value);

  static inline ::GlobalNamespace::__VRControllersRecorder__State____c* getStaticF___9();

  static inline void setStaticF___9__12_0(::System::Action_2<::System::IO::BinaryWriter*, ::GlobalNamespace::__VRControllersRecorder__Keyframe*>* value);

  static inline ::System::Action_2<::System::IO::BinaryWriter*, ::GlobalNamespace::__VRControllersRecorder__Keyframe*>* getStaticF___9__12_0();

  static inline ::GlobalNamespace::__VRControllersRecorder__State____c* New_ctor();

  /// @brief Method .ctor addr 0x22f3bb4 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <WriteTo>b__12_0 addr 0x22f3bbc size 0x14 virtual false final false
  inline void _WriteTo_b__12_0(::System::IO::BinaryWriter* binaryWriter, ::GlobalNamespace::__VRControllersRecorder__Keyframe* keyframe);

  // Ctor Parameters [CppParam { name: "", ty: "__VRControllersRecorder__State____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VRControllersRecorder__State____c(__VRControllersRecorder__State____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VRControllersRecorder__State____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VRControllersRecorder__State____c(__VRControllersRecorder__State____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VRControllersRecorder__State____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__VRControllersRecorder__State____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::State
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 84, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10057)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5846))
// CS Name: ::VRControllersRecorder::State*
class CORDL_TYPE __VRControllersRecorder__State : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::__VRControllersRecorder__State____c;

  /// @brief Field _keyframes, offset 0x10, size 0x8
  __declspec(property(get = __get__keyframes, put = __set__keyframes))::System::Collections::Generic::List_1<::GlobalNamespace::__VRControllersRecorder__Keyframe*>* _keyframes;

  /// @brief Field leftControllerOffset, offset 0x18, size 0x1c
  __declspec(property(get = __get_leftControllerOffset, put = __set_leftControllerOffset))::UnityEngine::Pose leftControllerOffset;

  /// @brief Field rightControllerOffset, offset 0x34, size 0x1c
  __declspec(property(get = __get_rightControllerOffset, put = __set_rightControllerOffset))::UnityEngine::Pose rightControllerOffset;

  /// @brief Field _version, offset 0x50, size 0x4
  __declspec(property(get = __get__version, put = __set__version)) uint32_t _version;

  __declspec(property(get = get_keyframes))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__VRControllersRecorder__Keyframe*>* keyframes;

  __declspec(property(get = get_version)) uint32_t version;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__VRControllersRecorder__Keyframe*>*& __get__keyframes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__VRControllersRecorder__Keyframe*>*> const& __get__keyframes() const;

  constexpr void __set__keyframes(::System::Collections::Generic::List_1<::GlobalNamespace::__VRControllersRecorder__Keyframe*>* value);

  constexpr ::UnityEngine::Pose& __get_leftControllerOffset();

  constexpr ::UnityEngine::Pose const& __get_leftControllerOffset() const;

  constexpr void __set_leftControllerOffset(::UnityEngine::Pose value);

  constexpr ::UnityEngine::Pose& __get_rightControllerOffset();

  constexpr ::UnityEngine::Pose const& __get_rightControllerOffset() const;

  constexpr void __set_rightControllerOffset(::UnityEngine::Pose value);

  constexpr uint32_t& __get__version();

  constexpr uint32_t const& __get__version() const;

  constexpr void __set__version(uint32_t value);

  static inline ::GlobalNamespace::__VRControllersRecorder__State* New_ctor(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__VRControllersRecorder__Keyframe*>* keyframes,
                                                                            ::UnityEngine::Pose leftControllerOffset, ::UnityEngine::Pose rightControllerOffset);

  /// @brief Method .ctor addr 0x22f38a4 size 0xf0 virtual false final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__VRControllersRecorder__Keyframe*>* keyframes, ::UnityEngine::Pose leftControllerOffset,
                    ::UnityEngine::Pose rightControllerOffset);

  static inline ::GlobalNamespace::__VRControllersRecorder__State* New_ctor(::System::Collections::Generic::List_1<::GlobalNamespace::__VRControllersRecorder__Keyframe*>* keyframes,
                                                                            ::UnityEngine::Pose leftControllerOffset, ::UnityEngine::Pose rightControllerOffset);

  /// @brief Method .ctor addr 0x22f3a00 size 0x78 virtual false final false
  inline void _ctor(::System::Collections::Generic::List_1<::GlobalNamespace::__VRControllersRecorder__Keyframe*>* keyframes, ::UnityEngine::Pose leftControllerOffset,
                    ::UnityEngine::Pose rightControllerOffset);

  static inline ::GlobalNamespace::__VRControllersRecorder__State* New_ctor(::System::Collections::Generic::List_1<::GlobalNamespace::__VRControllersRecorder__Keyframe*>* keyframes,
                                                                            ::UnityEngine::Pose leftControllerOffset, ::UnityEngine::Pose rightControllerOffset, uint32_t version);

  /// @brief Method .ctor addr 0x22f3994 size 0x6c virtual false final false
  inline void _ctor(::System::Collections::Generic::List_1<::GlobalNamespace::__VRControllersRecorder__Keyframe*>* keyframes, ::UnityEngine::Pose leftControllerOffset,
                    ::UnityEngine::Pose rightControllerOffset, uint32_t version);

  static inline ::GlobalNamespace::__VRControllersRecorder__State* New_ctor();

  /// @brief Method .ctor addr 0x22efd78 size 0x80 virtual false final false
  inline void _ctor();

  /// @brief Method get_keyframes addr 0x22f3a78 size 0x8 virtual false final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__VRControllersRecorder__Keyframe*>* get_keyframes();

  /// @brief Method get_version addr 0x22f3a80 size 0x8 virtual false final false
  inline uint32_t get_version();

  /// @brief Method WriteTo addr 0x22f16cc size 0x158 virtual false final false
  inline void WriteTo(::System::IO::BinaryWriter* writer);

  /// @brief Method ReadFrom addr 0x22f1f64 size 0x14c virtual false final false
  static inline ::GlobalNamespace::__VRControllersRecorder__State* ReadFrom(::System::IO::BinaryReader* reader);

  /// @brief Method FromSavedData addr 0x22f1d9c size 0x1c8 virtual false final false
  static inline ::GlobalNamespace::__VRControllersRecorder__State* FromSavedData(::GlobalNamespace::__VRControllersRecorder__SavedData* data, ::UnityEngine::Pose leftControllerOffset,
                                                                                 ::UnityEngine::Pose rightControllerOffset);

  /// @brief Method Upgrade addr 0x22f3a88 size 0xc8 virtual false final false
  inline ::GlobalNamespace::__VRControllersRecorder__State* Upgrade(::UnityEngine::Pose newLeftControllerOffset, ::UnityEngine::Pose newRightControllerOffset);

  /// @brief Method AddKeyframe addr 0x22f11ec size 0xa8 virtual false final false
  inline void AddKeyframe(::GlobalNamespace::__VRControllersRecorder__Keyframe* keyframe);

  // Ctor Parameters [CppParam { name: "", ty: "__VRControllersRecorder__State", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VRControllersRecorder__State(__VRControllersRecorder__State&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VRControllersRecorder__State", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VRControllersRecorder__State(__VRControllersRecorder__State const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VRControllersRecorder__State();

public:
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

} // namespace GlobalNamespace
// Type: ::VRControllersRecorder
// SizeInfo { instance_size: 192, native_size: -1, calculated_instance_size: 192, calculated_native_size: 188, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(5843))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5847))
// CS Name: ::VRControllersRecorder*
class CORDL_TYPE VRControllersRecorder : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using State = ::GlobalNamespace::__VRControllersRecorder__State;

  using Keyframe = ::GlobalNamespace::__VRControllersRecorder__Keyframe;

  using Mode = ::GlobalNamespace::__VRControllersRecorder__Mode;

  using SavedData = ::GlobalNamespace::__VRControllersRecorder__SavedData;

  using TypeSerializationBinder = ::GlobalNamespace::__VRControllersRecorder__TypeSerializationBinder;

  /// @brief Field _recordingTextAsset, offset 0x18, size 0x8
  __declspec(property(get = __get__recordingTextAsset, put = __set__recordingTextAsset))::UnityEngine::TextAsset* _recordingTextAsset;

  /// @brief Field _recordingFileName, offset 0x20, size 0x8
  __declspec(property(get = __get__recordingFileName, put = __set__recordingFileName))::StringW _recordingFileName;

  /// @brief Field _mode, offset 0x28, size 0x4
  __declspec(property(get = __get__mode, put = __set__mode))::GlobalNamespace::__VRControllersRecorder__Mode _mode;

  /// @brief Field _dontMoveHead, offset 0x2c, size 0x1
  __declspec(property(get = __get__dontMoveHead, put = __set__dontMoveHead)) bool _dontMoveHead;

  /// @brief Field _changeToNonVRCamera, offset 0x2d, size 0x1
  __declspec(property(get = __get__changeToNonVRCamera, put = __set__changeToNonVRCamera)) bool _changeToNonVRCamera;

  /// @brief Field _adjustSabersPositionBasedOnHeadPosition, offset 0x2e, size 0x1
  __declspec(property(get = __get__adjustSabersPositionBasedOnHeadPosition, put = __set__adjustSabersPositionBasedOnHeadPosition)) bool _adjustSabersPositionBasedOnHeadPosition;

  /// @brief Field _headRotationOffset, offset 0x30, size 0xc
  __declspec(property(get = __get__headRotationOffset, put = __set__headRotationOffset))::UnityEngine::Vector3 _headRotationOffset;

  /// @brief Field _headPositionOffset, offset 0x3c, size 0xc
  __declspec(property(get = __get__headPositionOffset, put = __set__headPositionOffset))::UnityEngine::Vector3 _headPositionOffset;

  /// @brief Field _headSmooth, offset 0x48, size 0x4
  __declspec(property(get = __get__headSmooth, put = __set__headSmooth)) float_t _headSmooth;

  /// @brief Field _cameraFOV, offset 0x4c, size 0x4
  __declspec(property(get = __get__cameraFOV, put = __set__cameraFOV)) float_t _cameraFOV;

  /// @brief Field _controllersTimeOffset, offset 0x50, size 0x4
  __declspec(property(get = __get__controllersTimeOffset, put = __set__controllersTimeOffset)) float_t _controllersTimeOffset;

  /// @brief Field _controllersSmooth, offset 0x54, size 0x4
  __declspec(property(get = __get__controllersSmooth, put = __set__controllersSmooth)) float_t _controllersSmooth;

  /// @brief Field _controller0, offset 0x58, size 0x8
  __declspec(property(get = __get__controller0, put = __set__controller0))::GlobalNamespace::VRController* _controller0;

  /// @brief Field _controller1, offset 0x60, size 0x8
  __declspec(property(get = __get__controller1, put = __set__controller1))::GlobalNamespace::VRController* _controller1;

  /// @brief Field _headTransform, offset 0x68, size 0x8
  __declspec(property(get = __get__headTransform, put = __set__headTransform))::UnityEngine::Transform* _headTransform;

  /// @brief Field _camera, offset 0x70, size 0x8
  __declspec(property(get = __get__camera, put = __set__camera))::UnityEngine::Camera* _camera;

  /// @brief Field _recorderCamera, offset 0x78, size 0x8
  __declspec(property(get = __get__recorderCamera, put = __set__recorderCamera))::UnityEngine::Camera* _recorderCamera;

  /// @brief Field _spawnRotationTransform, offset 0x80, size 0x8
  __declspec(property(get = __get__spawnRotationTransform, put = __set__spawnRotationTransform))::UnityEngine::Transform* _spawnRotationTransform;

  /// @brief Field _originTransform, offset 0x88, size 0x8
  __declspec(property(get = __get__originTransform, put = __set__originTransform))::UnityEngine::Transform* _originTransform;

  /// @brief Field _audioTimeSyncController, offset 0x90, size 0x8
  __declspec(property(get = __get__audioTimeSyncController, put = __set__audioTimeSyncController))::GlobalNamespace::AudioTimeSyncController* _audioTimeSyncController;

  /// @brief Field _controller0Transform, offset 0x98, size 0x8
  __declspec(property(get = __get__controller0Transform, put = __set__controller0Transform))::UnityEngine::Transform* _controller0Transform;

  /// @brief Field _controller1Transform, offset 0xa0, size 0x8
  __declspec(property(get = __get__controller1Transform, put = __set__controller1Transform))::UnityEngine::Transform* _controller1Transform;

  /// @brief Field _hasHead, offset 0xa8, size 0x1
  __declspec(property(get = __get__hasHead, put = __set__hasHead)) bool _hasHead;

  /// @brief Field _hasController0, offset 0xa9, size 0x1
  __declspec(property(get = __get__hasController0, put = __set__hasController0)) bool _hasController0;

  /// @brief Field _hasController1, offset 0xaa, size 0x1
  __declspec(property(get = __get__hasController1, put = __set__hasController1)) bool _hasController1;

  /// @brief Field _state, offset 0xb0, size 0x8
  __declspec(property(get = __get__state, put = __set__state))::GlobalNamespace::__VRControllersRecorder__State* _state;

  /// @brief Field _keyframeIndex, offset 0xb8, size 0x4
  __declspec(property(get = __get__keyframeIndex, put = __set__keyframeIndex)) int32_t _keyframeIndex;

  __declspec(property(get = get_currentPoses))::System::ValueTuple_3<::UnityEngine::Pose, ::UnityEngine::Pose, ::UnityEngine::Pose> currentPoses;

  __declspec(property(get = get_mode, put = set_mode))::GlobalNamespace::__VRControllersRecorder__Mode mode;

  __declspec(property(get = get_recordingTextAsset, put = set_recordingTextAsset))::UnityEngine::TextAsset* recordingTextAsset;

  __declspec(property(get = get_recordingFileName, put = set_recordingFileName))::StringW recordingFileName;

  __declspec(property(get = get_changeToNonVRCamera, put = set_changeToNonVRCamera)) bool changeToNonVRCamera;

  __declspec(property(get = get_path))::StringW path;

  constexpr ::UnityEngine::TextAsset*& __get__recordingTextAsset();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextAsset*> const& __get__recordingTextAsset() const;

  constexpr void __set__recordingTextAsset(::UnityEngine::TextAsset* value);

  constexpr ::StringW& __get__recordingFileName();

  constexpr ::StringW const& __get__recordingFileName() const;

  constexpr void __set__recordingFileName(::StringW value);

  constexpr ::GlobalNamespace::__VRControllersRecorder__Mode& __get__mode();

  constexpr ::GlobalNamespace::__VRControllersRecorder__Mode const& __get__mode() const;

  constexpr void __set__mode(::GlobalNamespace::__VRControllersRecorder__Mode value);

  constexpr bool& __get__dontMoveHead();

  constexpr bool const& __get__dontMoveHead() const;

  constexpr void __set__dontMoveHead(bool value);

  constexpr bool& __get__changeToNonVRCamera();

  constexpr bool const& __get__changeToNonVRCamera() const;

  constexpr void __set__changeToNonVRCamera(bool value);

  constexpr bool& __get__adjustSabersPositionBasedOnHeadPosition();

  constexpr bool const& __get__adjustSabersPositionBasedOnHeadPosition() const;

  constexpr void __set__adjustSabersPositionBasedOnHeadPosition(bool value);

  constexpr ::UnityEngine::Vector3& __get__headRotationOffset();

  constexpr ::UnityEngine::Vector3 const& __get__headRotationOffset() const;

  constexpr void __set__headRotationOffset(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get__headPositionOffset();

  constexpr ::UnityEngine::Vector3 const& __get__headPositionOffset() const;

  constexpr void __set__headPositionOffset(::UnityEngine::Vector3 value);

  constexpr float_t& __get__headSmooth();

  constexpr float_t const& __get__headSmooth() const;

  constexpr void __set__headSmooth(float_t value);

  constexpr float_t& __get__cameraFOV();

  constexpr float_t const& __get__cameraFOV() const;

  constexpr void __set__cameraFOV(float_t value);

  constexpr float_t& __get__controllersTimeOffset();

  constexpr float_t const& __get__controllersTimeOffset() const;

  constexpr void __set__controllersTimeOffset(float_t value);

  constexpr float_t& __get__controllersSmooth();

  constexpr float_t const& __get__controllersSmooth() const;

  constexpr void __set__controllersSmooth(float_t value);

  constexpr ::GlobalNamespace::VRController*& __get__controller0();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::VRController*> const& __get__controller0() const;

  constexpr void __set__controller0(::GlobalNamespace::VRController* value);

  constexpr ::GlobalNamespace::VRController*& __get__controller1();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::VRController*> const& __get__controller1() const;

  constexpr void __set__controller1(::GlobalNamespace::VRController* value);

  constexpr ::UnityEngine::Transform*& __get__headTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__headTransform() const;

  constexpr void __set__headTransform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Camera*& __get__camera();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> const& __get__camera() const;

  constexpr void __set__camera(::UnityEngine::Camera* value);

  constexpr ::UnityEngine::Camera*& __get__recorderCamera();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> const& __get__recorderCamera() const;

  constexpr void __set__recorderCamera(::UnityEngine::Camera* value);

  constexpr ::UnityEngine::Transform*& __get__spawnRotationTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__spawnRotationTransform() const;

  constexpr void __set__spawnRotationTransform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get__originTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__originTransform() const;

  constexpr void __set__originTransform(::UnityEngine::Transform* value);

  constexpr ::GlobalNamespace::AudioTimeSyncController*& __get__audioTimeSyncController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioTimeSyncController*> const& __get__audioTimeSyncController() const;

  constexpr void __set__audioTimeSyncController(::GlobalNamespace::AudioTimeSyncController* value);

  constexpr ::UnityEngine::Transform*& __get__controller0Transform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__controller0Transform() const;

  constexpr void __set__controller0Transform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get__controller1Transform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__controller1Transform() const;

  constexpr void __set__controller1Transform(::UnityEngine::Transform* value);

  constexpr bool& __get__hasHead();

  constexpr bool const& __get__hasHead() const;

  constexpr void __set__hasHead(bool value);

  constexpr bool& __get__hasController0();

  constexpr bool const& __get__hasController0() const;

  constexpr void __set__hasController0(bool value);

  constexpr bool& __get__hasController1();

  constexpr bool const& __get__hasController1() const;

  constexpr void __set__hasController1(bool value);

  constexpr ::GlobalNamespace::__VRControllersRecorder__State*& __get__state();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__VRControllersRecorder__State*> const& __get__state() const;

  constexpr void __set__state(::GlobalNamespace::__VRControllersRecorder__State* value);

  constexpr int32_t& __get__keyframeIndex();

  constexpr int32_t const& __get__keyframeIndex() const;

  constexpr void __set__keyframeIndex(int32_t value);

  /// @brief Method get_currentPoses addr 0x22eed18 size 0x210 virtual false final false
  inline ::System::ValueTuple_3<::UnityEngine::Pose, ::UnityEngine::Pose, ::UnityEngine::Pose> get_currentPoses();

  /// @brief Method set_mode addr 0x22eef28 size 0x8 virtual false final false
  inline void set_mode(::GlobalNamespace::__VRControllersRecorder__Mode value);

  /// @brief Method get_mode addr 0x22eef30 size 0x8 virtual false final false
  inline ::GlobalNamespace::__VRControllersRecorder__Mode get_mode();

  /// @brief Method set_recordingTextAsset addr 0x22eef38 size 0x8 virtual false final false
  inline void set_recordingTextAsset(::UnityEngine::TextAsset* value);

  /// @brief Method get_recordingTextAsset addr 0x22eef40 size 0x8 virtual false final false
  inline ::UnityEngine::TextAsset* get_recordingTextAsset();

  /// @brief Method set_recordingFileName addr 0x22eef48 size 0x8 virtual false final false
  inline void set_recordingFileName(::StringW value);

  /// @brief Method get_recordingFileName addr 0x22eef50 size 0x8 virtual false final false
  inline ::StringW get_recordingFileName();

  /// @brief Method set_changeToNonVRCamera addr 0x22eef58 size 0xc virtual false final false
  inline void set_changeToNonVRCamera(bool value);

  /// @brief Method get_changeToNonVRCamera addr 0x22eef64 size 0x8 virtual false final false
  inline bool get_changeToNonVRCamera();

  /// @brief Method Start addr 0x22eef6c size 0x65c virtual false final false
  inline void Start();

  /// @brief Method HandleControllerAnchorUpdate addr 0x22efdf8 size 0x194 virtual false final false
  inline void HandleControllerAnchorUpdate(::GlobalNamespace::VRController* controller, ::UnityEngine::Pose poseOffset);

  /// @brief Method CheckNodes addr 0x22ef5c8 size 0x258 virtual false final false
  inline void CheckNodes();

  /// @brief Method OnDestroy addr 0x22eff8c size 0xec virtual false final false
  inline void OnDestroy();

  /// @brief Method SetDefaultSettings addr 0x22f0420 size 0x84 virtual false final false
  inline void SetDefaultSettings();

  /// @brief Method SetInGamePlaybackDefaultSettings addr 0x22f04a4 size 0x84 virtual false final false
  inline void SetInGamePlaybackDefaultSettings();

  /// @brief Method PlaybackTick addr 0x22f0528 size 0x7c8 virtual false final false
  inline void PlaybackTick();

  /// @brief Method SetPositionAndRotation addr 0x22f0cf0 size 0x104 virtual false final false
  inline void SetPositionAndRotation(::UnityEngine::Transform* transf, ::UnityEngine::Vector3 targetPos, ::UnityEngine::Quaternion targetRot, float_t t);

  /// @brief Method RecordTick addr 0x22f0df4 size 0x388 virtual false final false
  inline void RecordTick();

  /// @brief Method Update addr 0x22f1294 size 0xe4 virtual false final false
  inline void Update();

  /// @brief Method LateUpdate addr 0x22f1378 size 0x10 virtual false final false
  inline void LateUpdate();

  /// @brief Method Save addr 0x22f0078 size 0x3a8 virtual false final false
  inline void Save();

  /// @brief Method GetSavedData addr 0x22f13b8 size 0x234 virtual false final false
  static inline ::GlobalNamespace::__VRControllersRecorder__SavedData* GetSavedData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__VRControllersRecorder__Keyframe*>* keyframes);

  /// @brief Method WriteTo addr 0x22f1388 size 0x30 virtual false final false
  static inline void WriteTo(::System::IO::BinaryWriter* writer, ::GlobalNamespace::__VRControllersRecorder__State* state);

  /// @brief Method WriteHeader addr 0x22f168c size 0x40 virtual false final false
  static inline void WriteHeader(::System::IO::BinaryWriter* writer);

  /// @brief Method ReadHeader addr 0x22f1824 size 0x4c virtual false final false
  static inline uint32_t ReadHeader(::System::IO::BinaryReader* reader);

  /// @brief Method Load addr 0x22ef820 size 0x558 virtual false final false
  inline bool Load();

  /// @brief Method get_path addr 0x22f1908 size 0xb4 virtual false final false
  inline ::StringW get_path();

  /// @brief Method LoadState addr 0x22f1870 size 0x98 virtual false final false
  inline ::GlobalNamespace::__VRControllersRecorder__State* LoadState(::System::IO::Stream* stream);

  /// @brief Method LoadStateWithDefaultOffset addr 0x22f1c6c size 0xa0 virtual false final false
  static inline ::GlobalNamespace::__VRControllersRecorder__State* LoadStateWithDefaultOffset(::System::IO::Stream* stream);

  /// @brief Method LoadState addr 0x22f19bc size 0x2b0 virtual false final false
  static inline ::GlobalNamespace::__VRControllersRecorder__State* LoadState(::System::IO::Stream* stream, ::UnityEngine::Pose leftControllerOffset, ::UnityEngine::Pose rightControllerOffset);

  /// @brief Method GetBinaryFormatter addr 0x22f20b0 size 0x8c virtual false final false
  static inline ::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* GetBinaryFormatter();

  /// @brief Method LoadSavedData addr 0x22f1d0c size 0x90 virtual false final false
  static inline ::GlobalNamespace::__VRControllersRecorder__SavedData* LoadSavedData(::System::IO::Stream* dataStream);

  /// @brief Method SerializeSavedData addr 0x22f2144 size 0x34 virtual false final false
  static inline void SerializeSavedData(::System::IO::Stream* dataStream, ::GlobalNamespace::__VRControllersRecorder__SavedData* savedData);

  /// @brief Method CreateAnimationClipFromRecording addr 0x22f2178 size 0xbf8 virtual false final false
  static inline ::UnityEngine::AnimationClip* CreateAnimationClipFromRecording(::StringW recordingFilePath);

  static inline ::GlobalNamespace::VRControllersRecorder* New_ctor();

  /// @brief Method .ctor addr 0x22f2d70 size 0x6c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "VRControllersRecorder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VRControllersRecorder(VRControllersRecorder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VRControllersRecorder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VRControllersRecorder(VRControllersRecorder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VRControllersRecorder();

public:
  /// @brief Field _recordingTextAsset, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::TextAsset* ____recordingTextAsset;

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
  ::GlobalNamespace::VRController* ____controller0;

  /// @brief Field _controller1, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::VRController* ____controller1;

  /// @brief Field _headTransform, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::Transform* ____headTransform;

  /// @brief Field _camera, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::Camera* ____camera;

  /// @brief Field _recorderCamera, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::Camera* ____recorderCamera;

  /// @brief Field _spawnRotationTransform, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::Transform* ____spawnRotationTransform;

  /// @brief Field _originTransform, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::Transform* ____originTransform;

  /// @brief Field _audioTimeSyncController, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::AudioTimeSyncController* ____audioTimeSyncController;

  /// @brief Field _controller0Transform, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::Transform* ____controller0Transform;

  /// @brief Field _controller1Transform, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::Transform* ____controller1Transform;

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

  /// @brief Field kSavedDataRecorderVersion offset 0xffffffff size 0x4
  static constexpr uint32_t kSavedDataRecorderVersion{ static_cast<uint32_t>(0x76010100u) };

  /// @brief Field kSavedDataWithOffsetRecorderVersion offset 0xffffffff size 0x4
  static constexpr uint32_t kSavedDataWithOffsetRecorderVersion{ static_cast<uint32_t>(0x760101u) };

  /// @brief Field kRecorderVersion offset 0xffffffff size 0x4
  static constexpr uint32_t kRecorderVersion{ static_cast<uint32_t>(0x7601u) };

  /// @brief Field kHeaderChar offset 0xffffffff size 0x2
  static constexpr char16_t kHeaderChar{ u'v' };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VRControllersRecorder, 0xc0>, "Size mismatch!");

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
