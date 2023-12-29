#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__VRControllersRecorder_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationBinder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VRControllersRecorder)
namespace GlobalNamespace {
struct __VRControllersRecorder__Mode;
}
namespace GlobalNamespace {
class __VRControllersRecorder__TypeSerializationBinder;
}
namespace GlobalNamespace {
class __VRControllersRecorder__Keyframe;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
class Transform;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class TextAsset;
}
namespace GlobalNamespace {
class VRController;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class __VRControllersRecorder__SavedData;
}
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Camera;
}
namespace GlobalNamespace {
class __VRControllersRecorder__SavedData__KeyframeSerializable;
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
class __VRControllersRecorder__TypeSerializationBinder;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__VRControllersRecorder__Mode);
MARK_REF_PTR_T(::GlobalNamespace::VRControllersRecorder);
MARK_REF_PTR_T(::GlobalNamespace::__VRControllersRecorder__Keyframe);
MARK_REF_PTR_T(::GlobalNamespace::__VRControllersRecorder__SavedData);
MARK_REF_PTR_T(::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable);
MARK_REF_PTR_T(::GlobalNamespace::__VRControllersRecorder__TypeSerializationBinder);
// Type: ::TypeSerializationBinder
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3205))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5931))
// CS Name: ::VRControllersRecorder::TypeSerializationBinder*
class CORDL_TYPE __VRControllersRecorder__TypeSerializationBinder : public ::System::Runtime::Serialization::SerializationBinder {
public:
  // Declarations
  /// @brief Method BindToType addr 0x21ab31c size 0x84 virtual true final false
  inline ::System::Type* BindToType(::StringW assemblyName, ::StringW typeName);

  static inline ::GlobalNamespace::__VRControllersRecorder__TypeSerializationBinder* New_ctor();

  /// @brief Method .ctor addr 0x21aa6a0 size 0x8 virtual false final false
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5932))
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

  /// @brief Method .ctor addr 0x21aa6b0 size 0x8 virtual false final false
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5933))
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

  /// @brief Method .ctor addr 0x21aa6a8 size 0x8 virtual false final false
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

static_assert(offsetof(::GlobalNamespace::__VRControllersRecorder__SavedData, ____keyframes) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Mode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5934))
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

static_assert(offsetof(::GlobalNamespace::__VRControllersRecorder__Mode, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Keyframe
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10176)), TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(10179))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5935))
// CS Name: ::VRControllersRecorder::Keyframe*
class CORDL_TYPE __VRControllersRecorder__Keyframe : public ::System::Object {
public:
  // Declarations
  /// @brief Field _pos1, offset 0x10, size 0xc
  __declspec(property(get = __get__pos1, put = __set__pos1))::UnityEngine::Vector3 _pos1;

  /// @brief Field _pos2, offset 0x1c, size 0xc
  __declspec(property(get = __get__pos2, put = __set__pos2))::UnityEngine::Vector3 _pos2;

  /// @brief Field _pos3, offset 0x28, size 0xc
  __declspec(property(get = __get__pos3, put = __set__pos3))::UnityEngine::Vector3 _pos3;

  /// @brief Field _rot1, offset 0x34, size 0x10
  __declspec(property(get = __get__rot1, put = __set__rot1))::UnityEngine::Quaternion _rot1;

  /// @brief Field _rot2, offset 0x44, size 0x10
  __declspec(property(get = __get__rot2, put = __set__rot2))::UnityEngine::Quaternion _rot2;

  /// @brief Field _rot3, offset 0x54, size 0x10
  __declspec(property(get = __get__rot3, put = __set__rot3))::UnityEngine::Quaternion _rot3;

  /// @brief Field _time, offset 0x64, size 0x4
  __declspec(property(get = __get__time, put = __set__time)) float_t _time;

  constexpr ::UnityEngine::Vector3& __get__pos1();

  constexpr ::UnityEngine::Vector3 const& __get__pos1() const;

  constexpr void __set__pos1(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get__pos2();

  constexpr ::UnityEngine::Vector3 const& __get__pos2() const;

  constexpr void __set__pos2(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get__pos3();

  constexpr ::UnityEngine::Vector3 const& __get__pos3() const;

  constexpr void __set__pos3(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Quaternion& __get__rot1();

  constexpr ::UnityEngine::Quaternion const& __get__rot1() const;

  constexpr void __set__rot1(::UnityEngine::Quaternion value);

  constexpr ::UnityEngine::Quaternion& __get__rot2();

  constexpr ::UnityEngine::Quaternion const& __get__rot2() const;

  constexpr void __set__rot2(::UnityEngine::Quaternion value);

  constexpr ::UnityEngine::Quaternion& __get__rot3();

  constexpr ::UnityEngine::Quaternion const& __get__rot3() const;

  constexpr void __set__rot3(::UnityEngine::Quaternion value);

  constexpr float_t& __get__time();

  constexpr float_t const& __get__time() const;

  constexpr void __set__time(float_t value);

  static inline ::GlobalNamespace::__VRControllersRecorder__Keyframe* New_ctor();

  /// @brief Method .ctor addr 0x21aa608 size 0x8 virtual false final false
  inline void _ctor();

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
  /// @brief Field _pos1, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____pos1;

  /// @brief Field _pos2, offset: 0x1c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____pos2;

  /// @brief Field _pos3, offset: 0x28, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____pos3;

  /// @brief Field _rot1, offset: 0x34, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____rot1;

  /// @brief Field _rot2, offset: 0x44, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____rot2;

  /// @brief Field _rot3, offset: 0x54, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____rot3;

  /// @brief Field _time, offset: 0x64, size: 0x4, def value: None
  float_t ____time;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__VRControllersRecorder__Keyframe, 0x68>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__VRControllersRecorder__Keyframe, ____pos1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VRControllersRecorder__Keyframe, ____pos2) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VRControllersRecorder__Keyframe, ____pos3) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VRControllersRecorder__Keyframe, ____rot1) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VRControllersRecorder__Keyframe, ____rot2) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VRControllersRecorder__Keyframe, ____rot3) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VRControllersRecorder__Keyframe, ____time) == 0x64, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::VRControllersRecorder
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 164, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10176)), TypeDefinitionIndex(TypeDefinitionIndex(5934)), TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5936))
// CS Name: ::VRControllersRecorder*
class CORDL_TYPE VRControllersRecorder : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
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

  /// @brief Field _keyframes, offset 0x98, size 0x8
  __declspec(property(get = __get__keyframes, put = __set__keyframes))::System::Collections::Generic::List_1<::GlobalNamespace::__VRControllersRecorder__Keyframe*>* _keyframes;

  /// @brief Field _keyframeIndex, offset 0xa0, size 0x4
  __declspec(property(get = __get__keyframeIndex, put = __set__keyframeIndex)) int32_t _keyframeIndex;

  __declspec(property(get = get_mode, put = set_mode))::GlobalNamespace::__VRControllersRecorder__Mode mode;

  __declspec(property(get = get_recordingTextAsset, put = set_recordingTextAsset))::UnityEngine::TextAsset* recordingTextAsset;

  __declspec(property(get = get_recordingFileName, put = set_recordingFileName))::StringW recordingFileName;

  __declspec(property(get = get_changeToNonVRCamera, put = set_changeToNonVRCamera)) bool changeToNonVRCamera;

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

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__VRControllersRecorder__Keyframe*>*& __get__keyframes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__VRControllersRecorder__Keyframe*>*> const& __get__keyframes() const;

  constexpr void __set__keyframes(::System::Collections::Generic::List_1<::GlobalNamespace::__VRControllersRecorder__Keyframe*>* value);

  constexpr int32_t& __get__keyframeIndex();

  constexpr int32_t const& __get__keyframeIndex() const;

  constexpr void __set__keyframeIndex(int32_t value);

  /// @brief Method set_mode addr 0x21a8d90 size 0x8 virtual false final false
  inline void set_mode(::GlobalNamespace::__VRControllersRecorder__Mode value);

  /// @brief Method get_mode addr 0x21a8d98 size 0x8 virtual false final false
  inline ::GlobalNamespace::__VRControllersRecorder__Mode get_mode();

  /// @brief Method set_recordingTextAsset addr 0x21a8da0 size 0x8 virtual false final false
  inline void set_recordingTextAsset(::UnityEngine::TextAsset* value);

  /// @brief Method get_recordingTextAsset addr 0x21a8da8 size 0x8 virtual false final false
  inline ::UnityEngine::TextAsset* get_recordingTextAsset();

  /// @brief Method set_recordingFileName addr 0x21a8db0 size 0x8 virtual false final false
  inline void set_recordingFileName(::StringW value);

  /// @brief Method get_recordingFileName addr 0x21a8db8 size 0x8 virtual false final false
  inline ::StringW get_recordingFileName();

  /// @brief Method set_changeToNonVRCamera addr 0x21a8dc0 size 0xc virtual false final false
  inline void set_changeToNonVRCamera(bool value);

  /// @brief Method get_changeToNonVRCamera addr 0x21a8dcc size 0x8 virtual false final false
  inline bool get_changeToNonVRCamera();

  /// @brief Method Start addr 0x21a8dd4 size 0x40c virtual false final false
  inline void Start();

  /// @brief Method OnDestroy addr 0x21a9780 size 0x10 virtual false final false
  inline void OnDestroy();

  /// @brief Method SetDefaultSettings addr 0x21a9a5c size 0x84 virtual false final false
  inline void SetDefaultSettings();

  /// @brief Method SetInGamePlaybackDefaultSettings addr 0x21a9ae0 size 0x84 virtual false final false
  inline void SetInGamePlaybackDefaultSettings();

  /// @brief Method PlaybackTick addr 0x21a9b64 size 0x72c virtual false final false
  inline void PlaybackTick();

  /// @brief Method SetPositionAndRotation addr 0x21aa290 size 0x104 virtual false final false
  inline void SetPositionAndRotation(::UnityEngine::Transform* transf, ::UnityEngine::Vector3 targetPos, ::UnityEngine::Quaternion targetRot, float_t t);

  /// @brief Method RecordTick addr 0x21aa394 size 0x274 virtual false final false
  inline void RecordTick();

  /// @brief Method Update addr 0x21aa610 size 0x80 virtual false final false
  inline void Update();

  /// @brief Method LateUpdate addr 0x21aa690 size 0x10 virtual false final false
  inline void LateUpdate();

  /// @brief Method Save addr 0x21a9790 size 0x2cc virtual false final false
  inline void Save();

  /// @brief Method Load addr 0x21a91e0 size 0x5a0 virtual false final false
  inline void Load();

  /// @brief Method CreateAnimationClipFromRecording addr 0x21aa6b8 size 0xbf8 virtual false final false
  static inline ::UnityEngine::AnimationClip* CreateAnimationClipFromRecording(::StringW recordingfilePath);

  static inline ::GlobalNamespace::VRControllersRecorder* New_ctor();

  /// @brief Method .ctor addr 0x21ab2b0 size 0x6c virtual false final false
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

  /// @brief Field _keyframes, offset: 0x98, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__VRControllersRecorder__Keyframe*>* ____keyframes;

  /// @brief Field _keyframeIndex, offset: 0xa0, size: 0x4, def value: None
  int32_t ____keyframeIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VRControllersRecorder, 0xa8>, "Size mismatch!");

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

static_assert(offsetof(::GlobalNamespace::VRControllersRecorder, ____keyframes) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRControllersRecorder, ____keyframeIndex) == 0xa0, "Offset mismatch!");

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
NEED_NO_BOX(::GlobalNamespace::__VRControllersRecorder__TypeSerializationBinder);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__VRControllersRecorder__TypeSerializationBinder*, "", "VRControllersRecorder/TypeSerializationBinder");
