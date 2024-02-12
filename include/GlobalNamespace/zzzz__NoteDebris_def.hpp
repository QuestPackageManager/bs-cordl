#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NoteDebris)
namespace GlobalNamespace {
class ColorManager;
}
namespace GlobalNamespace {
struct ColorType;
}
namespace GlobalNamespace {
template <typename T> class ILazyCopyHashSet_1;
}
namespace GlobalNamespace {
class INoteDebrisDidFinishEvent;
}
namespace GlobalNamespace {
template <typename T> class LazyCopyHashSet_1;
}
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace GlobalNamespace {
class NoteDebrisPhysics;
}
namespace GlobalNamespace {
class __NoteDebris__Pool;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteDebris;
}
namespace GlobalNamespace {
class __NoteDebris__Pool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoteDebris);
MARK_REF_PTR_T(::GlobalNamespace::__NoteDebris__Pool);
// Type: ::NoteDebris
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8969))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4124))
// CS Name: ::NoteDebris*
class CORDL_TYPE NoteDebris : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Pool = ::GlobalNamespace::__NoteDebris__Pool;

  /// @brief Field _meshTransform, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__meshTransform, put = __cordl_internal_set__meshTransform))::UnityW<::UnityEngine::Transform> _meshTransform;

  /// @brief Field _physics, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__physics, put = __cordl_internal_set__physics))::UnityW<::GlobalNamespace::NoteDebrisPhysics> _physics;

  /// @brief Field _materialPropertyBlockController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__materialPropertyBlockController,
                      put = __cordl_internal_set__materialPropertyBlockController))::UnityW<::GlobalNamespace::MaterialPropertyBlockController> _materialPropertyBlockController;

  /// @brief Field _cutoutCurve, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__cutoutCurve, put = __cordl_internal_set__cutoutCurve))::UnityEngine::AnimationCurve* _cutoutCurve;

  /// @brief Field _maxCutPointCenterDistance, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__maxCutPointCenterDistance, put = __cordl_internal_set__maxCutPointCenterDistance)) float_t _maxCutPointCenterDistance;

  /// @brief Field _centroidComputationMesh, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__centroidComputationMesh, put = __cordl_internal_set__centroidComputationMesh))::UnityW<::UnityEngine::Mesh> _centroidComputationMesh;

  /// @brief Field _colorManager, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__colorManager, put = __cordl_internal_set__colorManager))::GlobalNamespace::ColorManager* _colorManager;

  /// @brief Field _elapsedTime, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__elapsedTime, put = __cordl_internal_set__elapsedTime)) float_t _elapsedTime;

  /// @brief Field _lifeTime, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__lifeTime, put = __cordl_internal_set__lifeTime)) float_t _lifeTime;

  /// @brief Field _didFinishEvent, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__didFinishEvent,
                      put = __cordl_internal_set__didFinishEvent))::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteDebrisDidFinishEvent*>* _didFinishEvent;

  /// @brief Field _cutoutPropertyID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__cutoutPropertyID, put = setStaticF__cutoutPropertyID)) int32_t _cutoutPropertyID;

  /// @brief Field _colorID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__colorID, put = setStaticF__colorID)) int32_t _colorID;

  /// @brief Field _cutPlaneID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__cutPlaneID, put = setStaticF__cutPlaneID)) int32_t _cutPlaneID;

  /// @brief Field _cutoutTexOffsetID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__cutoutTexOffsetID, put = setStaticF__cutoutTexOffsetID)) int32_t _cutoutTexOffsetID;

  /// @brief Field _meshVertices, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__meshVertices, put = setStaticF__meshVertices))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> _meshVertices;

  __declspec(property(get = get_didFinishEvent))::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteDebrisDidFinishEvent*>* didFinishEvent;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__meshTransform();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__meshTransform() const;

  constexpr void __cordl_internal_set__meshTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr ::UnityW<::GlobalNamespace::NoteDebrisPhysics>& __cordl_internal_get__physics();

  constexpr ::UnityW<::GlobalNamespace::NoteDebrisPhysics> const& __cordl_internal_get__physics() const;

  constexpr void __cordl_internal_set__physics(::UnityW<::GlobalNamespace::NoteDebrisPhysics> value);

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& __cordl_internal_get__materialPropertyBlockController();

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& __cordl_internal_get__materialPropertyBlockController() const;

  constexpr void __cordl_internal_set__materialPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value);

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__cutoutCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get__cutoutCurve() const;

  constexpr void __cordl_internal_set__cutoutCurve(::UnityEngine::AnimationCurve* value);

  constexpr float_t& __cordl_internal_get__maxCutPointCenterDistance();

  constexpr float_t const& __cordl_internal_get__maxCutPointCenterDistance() const;

  constexpr void __cordl_internal_set__maxCutPointCenterDistance(float_t value);

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__centroidComputationMesh();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__centroidComputationMesh() const;

  constexpr void __cordl_internal_set__centroidComputationMesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr ::GlobalNamespace::ColorManager*& __cordl_internal_get__colorManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> const& __cordl_internal_get__colorManager() const;

  constexpr void __cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value);

  constexpr float_t& __cordl_internal_get__elapsedTime();

  constexpr float_t const& __cordl_internal_get__elapsedTime() const;

  constexpr void __cordl_internal_set__elapsedTime(float_t value);

  constexpr float_t& __cordl_internal_get__lifeTime();

  constexpr float_t const& __cordl_internal_get__lifeTime() const;

  constexpr void __cordl_internal_set__lifeTime(float_t value);

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteDebrisDidFinishEvent*>*& __cordl_internal_get__didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteDebrisDidFinishEvent*>*> const& __cordl_internal_get__didFinishEvent() const;

  constexpr void __cordl_internal_set__didFinishEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteDebrisDidFinishEvent*>* value);

  static inline void setStaticF__cutoutPropertyID(int32_t value);

  static inline int32_t getStaticF__cutoutPropertyID();

  static inline void setStaticF__colorID(int32_t value);

  static inline int32_t getStaticF__colorID();

  static inline void setStaticF__cutPlaneID(int32_t value);

  static inline int32_t getStaticF__cutPlaneID();

  static inline void setStaticF__cutoutTexOffsetID(int32_t value);

  static inline int32_t getStaticF__cutoutTexOffsetID();

  static inline void setStaticF__meshVertices(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  static inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> getStaticF__meshVertices();

  /// @brief Method get_didFinishEvent, addr 0x22cf4bc, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteDebrisDidFinishEvent*>* get_didFinishEvent();

  /// @brief Method Awake, addr 0x22cf4c4, size 0x98, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Update, addr 0x22cf55c, size 0x27c, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method Init, addr 0x22cf7d8, size 0x570, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::ColorType colorType, ::UnityEngine::Vector3 notePos, ::UnityEngine::Quaternion noteRot, ::UnityEngine::Vector3 noteMoveVec, ::UnityEngine::Vector3 noteScale,
                   ::UnityEngine::Vector3 positionOffset, ::UnityEngine::Quaternion rotationOffset, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Vector3 cutNormal, ::UnityEngine::Vector3 force,
                   ::UnityEngine::Vector3 torque, float_t lifeTime);

  static inline ::GlobalNamespace::NoteDebris* New_ctor();

  /// @brief Method .ctor, addr 0x22cfd48, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NoteDebris", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteDebris(NoteDebris&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteDebris", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteDebris(NoteDebris const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteDebris();

public:
  /// @brief Field _meshTransform, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____meshTransform;

  /// @brief Field _physics, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NoteDebrisPhysics> ____physics;

  /// @brief Field _materialPropertyBlockController, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> ____materialPropertyBlockController;

  /// @brief Field _cutoutCurve, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____cutoutCurve;

  /// @brief Field _maxCutPointCenterDistance, offset: 0x38, size: 0x4, def value: None
  float_t ____maxCutPointCenterDistance;

  /// @brief Field _centroidComputationMesh, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ____centroidComputationMesh;

  /// @brief Field _colorManager, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::ColorManager* ____colorManager;

  /// @brief Field _elapsedTime, offset: 0x50, size: 0x4, def value: None
  float_t ____elapsedTime;

  /// @brief Field _lifeTime, offset: 0x54, size: 0x4, def value: None
  float_t ____lifeTime;

  /// @brief Field _didFinishEvent, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteDebrisDidFinishEvent*>* ____didFinishEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteDebris, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteDebris, ____meshTransform) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteDebris, ____physics) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteDebris, ____materialPropertyBlockController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteDebris, ____cutoutCurve) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteDebris, ____maxCutPointCenterDistance) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteDebris, ____centroidComputationMesh) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteDebris, ____colorManager) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteDebris, ____elapsedTime) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteDebris, ____lifeTime) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteDebris, ____didFinishEvent) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Pool
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(4124)), TypeDefinitionIndex(TypeDefinitionIndex(10192)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10192), inst:
// 2794 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(4123)) CS Name: ::NoteDebris::Pool*
class CORDL_TYPE __NoteDebris__Pool : public ::Zenject::MonoMemoryPool_1<::UnityW<::GlobalNamespace::NoteDebris>> {
public:
  // Declarations
  static inline ::GlobalNamespace::__NoteDebris__Pool* New_ctor();

  /// @brief Method .ctor, addr 0x22cfee8, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__NoteDebris__Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NoteDebris__Pool(__NoteDebris__Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NoteDebris__Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NoteDebris__Pool(__NoteDebris__Pool const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NoteDebris__Pool();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NoteDebris__Pool, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteDebris);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteDebris*, "", "NoteDebris");
NEED_NO_BOX(::GlobalNamespace::__NoteDebris__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NoteDebris__Pool*, "", "NoteDebris/Pool");
