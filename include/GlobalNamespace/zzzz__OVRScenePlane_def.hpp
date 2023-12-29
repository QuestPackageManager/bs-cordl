#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRSpace_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRScenePlane)
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
class OVRSceneAnchor;
}
namespace GlobalNamespace {
struct __OVRScenePlane__GetBoundaryJob;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace GlobalNamespace {
class IOVRSceneComponent;
}
namespace GlobalNamespace {
struct __OVRScenePlane__GetBoundaryLengthJob;
}
namespace GlobalNamespace {
struct OVRSpace;
}
namespace Unity::Jobs {
class IJob;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRScenePlane;
}
namespace GlobalNamespace {
struct __OVRScenePlane__GetBoundaryJob;
}
namespace GlobalNamespace {
struct __OVRScenePlane__GetBoundaryLengthJob;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRScenePlane);
MARK_VAL_T(::GlobalNamespace::__OVRScenePlane__GetBoundaryJob);
MARK_VAL_T(::GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob);
// Type: ::GetBoundaryLengthJob
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9927)), TypeDefinitionIndex(TypeDefinitionIndex(8825)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9927), inst: 101
// })} Self: TypeDefinitionIndex(TypeDefinitionIndex(8815)) CS Name: ::OVRScenePlane::GetBoundaryLengthJob
struct CORDL_TYPE __OVRScenePlane__GetBoundaryLengthJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*();

  /// @brief Method Execute addr 0x2620200 size 0x84 virtual true final true
  inline void Execute();

  // Ctor Parameters [CppParam { name: "Space", ty: "::GlobalNamespace::OVRSpace", modifiers: "", def_value: None }, CppParam { name: "Length", ty: "::Unity::Collections::NativeArray_1<int32_t>",
  // modifiers: "", def_value: None }]
  constexpr __OVRScenePlane__GetBoundaryLengthJob(::GlobalNamespace::OVRSpace Space, ::Unity::Collections::NativeArray_1<int32_t> Length) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRScenePlane__GetBoundaryLengthJob();

  /// @brief Field Space, offset: 0x0, size: 0x8, def value: None
  ::GlobalNamespace::OVRSpace Space;

  /// @brief Field Length, offset: 0x8, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> Length;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob, Space) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob, Length) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::GetBoundaryJob
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8825)), TypeDefinitionIndex(TypeDefinitionIndex(10170)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9927), inst: 406
// }), TypeDefinitionIndex(TypeDefinitionIndex(9927))} Self: TypeDefinitionIndex(TypeDefinitionIndex(8816)) CS Name: ::OVRScenePlane::GetBoundaryJob
struct CORDL_TYPE __OVRScenePlane__GetBoundaryJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*();

  /// @brief Method HasBoundaryChanged addr 0x2620284 size 0xb0 virtual false final false
  inline bool HasBoundaryChanged();

  /// @brief Method SetNaN addr 0x2620334 size 0x14 virtual false final false
  static inline void SetNaN(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> array);

  /// @brief Method Execute addr 0x2620348 size 0xa8 virtual true final true
  inline void Execute();

  // Ctor Parameters [CppParam { name: "Space", ty: "::GlobalNamespace::OVRSpace", modifiers: "", def_value: None }, CppParam { name: "Boundary", ty:
  // "::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>", modifiers: "", def_value: None }, CppParam { name: "PreviousBoundary", ty:
  // "::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>", modifiers: "", def_value: None }]
  constexpr __OVRScenePlane__GetBoundaryJob(::GlobalNamespace::OVRSpace Space, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> Boundary,
                                            ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> PreviousBoundary) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRScenePlane__GetBoundaryJob();

  /// @brief Field Space, offset: 0x0, size: 0x8, def value: None
  ::GlobalNamespace::OVRSpace Space;

  /// @brief Field Boundary, offset: 0x8, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> Boundary;

  /// @brief Field PreviousBoundary, offset: 0x18, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> PreviousBoundary;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRScenePlane__GetBoundaryJob, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRScenePlane__GetBoundaryJob, Space) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRScenePlane__GetBoundaryJob, Boundary) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRScenePlane__GetBoundaryJob, PreviousBoundary) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRScenePlane
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10170)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9927), inst: 101 }), GenericInstantiation(GenericInstantiation {
// tdi: TypeDefinitionIndex(9927), inst: 406 }), TypeDefinitionIndex(TypeDefinitionIndex(9905)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2446), inst: 4643 }),
// TypeDefinitionIndex(TypeDefinitionIndex(10152)), TypeDefinitionIndex(TypeDefinitionIndex(2446)), TypeDefinitionIndex(TypeDefinitionIndex(9927))} Self: TypeDefinitionIndex(TypeDefinitionIndex(8817))
// CS Name: ::OVRScenePlane*
class CORDL_TYPE OVRScenePlane : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using GetBoundaryJob = ::GlobalNamespace::__OVRScenePlane__GetBoundaryJob;

  using GetBoundaryLengthJob = ::GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob;

  /// @brief Field <Width>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __get__Width_k__BackingField, put = __set__Width_k__BackingField)) float_t _Width_k__BackingField;

  /// @brief Field <Height>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __get__Height_k__BackingField, put = __set__Height_k__BackingField)) float_t _Height_k__BackingField;

  /// @brief Field _scaleChildren, offset 0x20, size 0x1
  __declspec(property(get = __get__scaleChildren, put = __set__scaleChildren)) bool _scaleChildren;

  /// @brief Field _jobHandle, offset 0x28, size 0x18
  __declspec(property(get = __get__jobHandle, put = __set__jobHandle))::System::Nullable_1<::Unity::Jobs::JobHandle> _jobHandle;

  /// @brief Field _previousBoundary, offset 0x40, size 0x10
  __declspec(property(get = __get__previousBoundary, put = __set__previousBoundary))::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> _previousBoundary;

  /// @brief Field _boundaryLength, offset 0x50, size 0x10
  __declspec(property(get = __get__boundaryLength, put = __set__boundaryLength))::Unity::Collections::NativeArray_1<int32_t> _boundaryLength;

  /// @brief Field _boundaryBuffer, offset 0x60, size 0x10
  __declspec(property(get = __get__boundaryBuffer, put = __set__boundaryBuffer))::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> _boundaryBuffer;

  /// @brief Field _boundaryRequested, offset 0x70, size 0x1
  __declspec(property(get = __get__boundaryRequested, put = __set__boundaryRequested)) bool _boundaryRequested;

  /// @brief Field _sceneAnchor, offset 0x78, size 0x8
  __declspec(property(get = __get__sceneAnchor, put = __set__sceneAnchor))::GlobalNamespace::OVRSceneAnchor* _sceneAnchor;

  /// @brief Field _boundary, offset 0x80, size 0x8
  __declspec(property(get = __get__boundary, put = __set__boundary))::System::Collections::Generic::List_1<::UnityEngine::Vector2>* _boundary;

  __declspec(property(get = get_Width, put = set_Width)) float_t Width;

  __declspec(property(get = get_Height, put = set_Height)) float_t Height;

  __declspec(property(get = get_Dimensions))::UnityEngine::Vector2 Dimensions;

  __declspec(property(get = get_Boundary))::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2>* Boundary;

  __declspec(property(get = get_ScaleChildren, put = set_ScaleChildren)) bool ScaleChildren;

  /// @brief Convert operator to "::GlobalNamespace::IOVRSceneComponent"
  constexpr operator ::GlobalNamespace::IOVRSceneComponent*() noexcept;

  constexpr float_t& __get__Width_k__BackingField();

  constexpr float_t const& __get__Width_k__BackingField() const;

  constexpr void __set__Width_k__BackingField(float_t value);

  constexpr float_t& __get__Height_k__BackingField();

  constexpr float_t const& __get__Height_k__BackingField() const;

  constexpr void __set__Height_k__BackingField(float_t value);

  constexpr bool& __get__scaleChildren();

  constexpr bool const& __get__scaleChildren() const;

  constexpr void __set__scaleChildren(bool value);

  constexpr ::System::Nullable_1<::Unity::Jobs::JobHandle>& __get__jobHandle();

  constexpr ::System::Nullable_1<::Unity::Jobs::JobHandle> const& __get__jobHandle() const;

  constexpr void __set__jobHandle(::System::Nullable_1<::Unity::Jobs::JobHandle> value);

  constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>& __get__previousBoundary();

  constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> const& __get__previousBoundary() const;

  constexpr void __set__previousBoundary(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> value);

  constexpr ::Unity::Collections::NativeArray_1<int32_t>& __get__boundaryLength();

  constexpr ::Unity::Collections::NativeArray_1<int32_t> const& __get__boundaryLength() const;

  constexpr void __set__boundaryLength(::Unity::Collections::NativeArray_1<int32_t> value);

  constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>& __get__boundaryBuffer();

  constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> const& __get__boundaryBuffer() const;

  constexpr void __set__boundaryBuffer(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> value);

  constexpr bool& __get__boundaryRequested();

  constexpr bool const& __get__boundaryRequested() const;

  constexpr void __set__boundaryRequested(bool value);

  constexpr ::GlobalNamespace::OVRSceneAnchor*& __get__sceneAnchor();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRSceneAnchor*> const& __get__sceneAnchor() const;

  constexpr void __set__sceneAnchor(::GlobalNamespace::OVRSceneAnchor* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*& __get__boundary();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*> const& __get__boundary() const;

  constexpr void __set__boundary(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* value);

  /// @brief Method get_Width addr 0x261f4d4 size 0x8 virtual false final false
  inline float_t get_Width();

  /// @brief Method set_Width addr 0x261f4dc size 0x8 virtual false final false
  inline void set_Width(float_t value);

  /// @brief Method get_Height addr 0x261f4e4 size 0x8 virtual false final false
  inline float_t get_Height();

  /// @brief Method set_Height addr 0x261f4ec size 0x8 virtual false final false
  inline void set_Height(float_t value);

  /// @brief Method get_Dimensions addr 0x261f4f4 size 0x8 virtual false final false
  inline ::UnityEngine::Vector2 get_Dimensions();

  /// @brief Method get_Boundary addr 0x261f4fc size 0x8 virtual false final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2>* get_Boundary();

  /// @brief Method get_ScaleChildren addr 0x261f504 size 0x8 virtual false final false
  inline bool get_ScaleChildren();

  /// @brief Method set_ScaleChildren addr 0x261f50c size 0x48 virtual false final false
  inline void set_ScaleChildren(bool value);

  /// @brief Method SetChildScale addr 0x261f554 size 0x90 virtual false final false
  static inline void SetChildScale(::UnityEngine::Transform* parentTransform, float_t width, float_t height);

  /// @brief Method Awake addr 0x261f5e4 size 0xd4 virtual false final false
  inline void Awake();

  /// @brief Method Start addr 0x261f6b8 size 0x4 virtual false final false
  inline void Start();

  /// @brief Method IOVRSceneComponent.Initialize addr 0x261f6ec size 0x120 virtual true final true
  inline void IOVRSceneComponent_Initialize();

  /// @brief Method ScheduleGetLengthJob addr 0x261f80c size 0x188 virtual false final false
  inline void ScheduleGetLengthJob();

  /// @brief Method RequestBoundary addr 0x261f6bc size 0x30 virtual false final false
  inline void RequestBoundary();

  /// @brief Method Update addr 0x261f994 size 0x6a4 virtual false final false
  inline void Update();

  /// @brief Method OnDisable addr 0x2620068 size 0x114 virtual false final false
  inline void OnDisable();

  static inline ::GlobalNamespace::OVRScenePlane* New_ctor();

  /// @brief Method .ctor addr 0x262017c size 0x84 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OVRScenePlane", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRScenePlane(OVRScenePlane&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRScenePlane", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRScenePlane(OVRScenePlane const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRScenePlane();

public:
  /// @brief Field <Width>k__BackingField, offset: 0x18, size: 0x4, def value: None
  float_t ____Width_k__BackingField;

  /// @brief Field <Height>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  float_t ____Height_k__BackingField;

  /// @brief Field _scaleChildren, offset: 0x20, size: 0x1, def value: None
  bool ____scaleChildren;

  /// @brief Field _jobHandle, offset: 0x28, size: 0x18, def value: None
  ::System::Nullable_1<::Unity::Jobs::JobHandle> ____jobHandle;

  /// @brief Field _previousBoundary, offset: 0x40, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> ____previousBoundary;

  /// @brief Field _boundaryLength, offset: 0x50, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> ____boundaryLength;

  /// @brief Field _boundaryBuffer, offset: 0x60, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> ____boundaryBuffer;

  /// @brief Field _boundaryRequested, offset: 0x70, size: 0x1, def value: None
  bool ____boundaryRequested;

  /// @brief Field _sceneAnchor, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::OVRSceneAnchor* ____sceneAnchor;

  /// @brief Field _boundary, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* ____boundary;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRScenePlane, 0x88>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScenePlane, ____Width_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScenePlane, ____Height_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScenePlane, ____scaleChildren) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScenePlane, ____jobHandle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScenePlane, ____previousBoundary) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScenePlane, ____boundaryLength) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScenePlane, ____boundaryBuffer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScenePlane, ____boundaryRequested) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScenePlane, ____sceneAnchor) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScenePlane, ____boundary) == 0x80, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRScenePlane);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRScenePlane*, "", "OVRScenePlane");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRScenePlane__GetBoundaryJob, "", "OVRScenePlane/GetBoundaryJob");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob, "", "OVRScenePlane/GetBoundaryLengthJob");
