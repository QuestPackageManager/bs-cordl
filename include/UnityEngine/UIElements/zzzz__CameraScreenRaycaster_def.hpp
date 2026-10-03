#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/CameraScreenRaycaster.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CameraScreenRaycaster)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace System {
class IDisposable;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
template <typename T1, typename T2, typename T3> struct ValueTuple_3;
}
namespace UnityEngine::UIElements {
class CameraScreenRaycaster_CameraRayEnumerator;
}
namespace UnityEngine::UIElements {
class CameraScreenRaycaster___c;
}
namespace UnityEngine::UIElements {
class IScreenRaycaster;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class CameraScreenRaycaster;
}
namespace UnityEngine::UIElements {
class CameraScreenRaycaster_CameraRayEnumerator;
}
namespace UnityEngine::UIElements {
class CameraScreenRaycaster___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::CameraScreenRaycaster*);
MARK_REF_T(::UnityEngine::UIElements::CameraScreenRaycaster_CameraRayEnumerator*);
MARK_REF_T(::UnityEngine::UIElements::CameraScreenRaycaster___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::CameraScreenRaycaster*, "UnityEngine.UIElements", "CameraScreenRaycaster");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::CameraScreenRaycaster_CameraRayEnumerator*, "UnityEngine.UIElements", "CameraScreenRaycaster/CameraRayEnumerator");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::CameraScreenRaycaster___c*, "UnityEngine.UIElements", "CameraScreenRaycaster/<>c");
// Dependencies System.Nullable`1<T>, System.Object, UnityEngine.Camera, UnityEngine.Ray, UnityEngine.Vector2
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.CameraScreenRaycaster/CameraRayEnumerator
class CORDL_TYPE CameraScreenRaycaster_CameraRayEnumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::System::ValueTuple_3<::UnityEngine::Ray, ::UnityW<::UnityEngine::Camera>, bool> Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field m_Cameras, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Cameras, put = __cordl_internal_set_m_Cameras)) ::ArrayW<::UnityW<::UnityEngine::Camera>> m_Cameras;

  /// @brief Field m_CurrentCamera, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CurrentCamera, put = __cordl_internal_set_m_CurrentCamera)) ::UnityW<::UnityEngine::Camera> m_CurrentCamera;

  /// @brief Field m_CurrentRay, offset 0x38, size 0x18
  __declspec(property(get = __cordl_internal_get_m_CurrentRay, put = __cordl_internal_set_m_CurrentRay)) ::UnityEngine::Ray m_CurrentRay;

  /// @brief Field m_Index, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Index, put = __cordl_internal_set_m_Index)) int32_t m_Index;

  /// @brief Field m_IsInsideCameraRect, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsInsideCameraRect, put = __cordl_internal_set_m_IsInsideCameraRect)) bool m_IsInsideCameraRect;

  /// @brief Field m_LayerMask, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LayerMask, put = __cordl_internal_set_m_LayerMask)) int32_t m_LayerMask;

  /// @brief Field m_MousePosition, offset 0x1c, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MousePosition, put = __cordl_internal_set_m_MousePosition)) ::UnityEngine::Vector2 m_MousePosition;

  /// @brief Field m_TargetDisplay, offset 0x24, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TargetDisplay, put = __cordl_internal_set_m_TargetDisplay)) ::System::Nullable_1<int32_t> m_TargetDisplay;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_3<::UnityEngine::Ray,::UnityW<::UnityEngine::Camera>,bool>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_3<::UnityEngine::Ray, ::UnityW<::UnityEngine::Camera>, bool>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_3<::UnityEngine::Ray,::UnityW<::UnityEngine::Camera>,bool>>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_3<::UnityEngine::Ray, ::UnityW<::UnityEngine::Camera>, bool>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x7248928, size 0x80, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetEnumerator, addr 0x7248920, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_3<::UnityEngine::Ray, ::UnityW<::UnityEngine::Camera>, bool>>* GetEnumerator();

  /// @brief Method GetPooled, addr 0x7248454, size 0xac, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::CameraScreenRaycaster_CameraRayEnumerator* GetPooled(::ArrayW<::UnityEngine::Camera*> cameras, int32_t layerMask, ::UnityEngine::Vector2 mousePosition,
                                                                                                ::System::Nullable_1<int32_t> targetDisplay);

  /// @brief Method MoveNext, addr 0x724878c, size 0x80, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::UIElements::CameraScreenRaycaster_CameraRayEnumerator* New_ctor();

  /// @brief Method Reset, addr 0x724880c, size 0xc, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x7248924, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x7248884, size 0x9c, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Camera>> const& __cordl_internal_get_m_Cameras() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Camera>>& __cordl_internal_get_m_Cameras();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_m_CurrentCamera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_m_CurrentCamera();

  constexpr ::UnityEngine::Ray const& __cordl_internal_get_m_CurrentRay() const;

  constexpr ::UnityEngine::Ray& __cordl_internal_get_m_CurrentRay();

  constexpr int32_t const& __cordl_internal_get_m_Index() const;

  constexpr int32_t& __cordl_internal_get_m_Index();

  constexpr bool const& __cordl_internal_get_m_IsInsideCameraRect() const;

  constexpr bool& __cordl_internal_get_m_IsInsideCameraRect();

  constexpr int32_t const& __cordl_internal_get_m_LayerMask() const;

  constexpr int32_t& __cordl_internal_get_m_LayerMask();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_MousePosition() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_MousePosition();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get_m_TargetDisplay() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get_m_TargetDisplay();

  constexpr void __cordl_internal_set_m_Cameras(::ArrayW<::UnityW<::UnityEngine::Camera>> value);

  constexpr void __cordl_internal_set_m_CurrentCamera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set_m_CurrentRay(::UnityEngine::Ray value);

  constexpr void __cordl_internal_set_m_Index(int32_t value);

  constexpr void __cordl_internal_set_m_IsInsideCameraRect(bool value);

  constexpr void __cordl_internal_set_m_LayerMask(int32_t value);

  constexpr void __cordl_internal_set_m_MousePosition(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_TargetDisplay(::System::Nullable_1<int32_t> value);

  /// @brief Method .ctor, addr 0x72489a8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Current, addr 0x7248818, size 0x6c, virtual true, abstract: false, final true
  inline ::System::ValueTuple_3<::UnityEngine::Ray, ::UnityW<::UnityEngine::Camera>, bool> get_Current();

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_3<::UnityEngine::Ray,::UnityW<::UnityEngine::Camera>,bool>>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_3<::UnityEngine::Ray, ::UnityW<::UnityEngine::Camera>, bool>>*
  i___System__Collections__Generic__IEnumerable_1___System__ValueTuple_3___UnityEngine__Ray___UnityW___UnityEngine__Camera__bool__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_3<::UnityEngine::Ray,::UnityW<::UnityEngine::Camera>,bool>>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_3<::UnityEngine::Ray, ::UnityW<::UnityEngine::Camera>, bool>>*
  i___System__Collections__Generic__IEnumerator_1___System__ValueTuple_3___UnityEngine__Ray___UnityW___UnityEngine__Camera__bool__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CameraScreenRaycaster_CameraRayEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CameraScreenRaycaster_CameraRayEnumerator", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CameraScreenRaycaster_CameraRayEnumerator(CameraScreenRaycaster_CameraRayEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CameraScreenRaycaster_CameraRayEnumerator", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CameraScreenRaycaster_CameraRayEnumerator(CameraScreenRaycaster_CameraRayEnumerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4629 };

  /// @brief Field m_Cameras, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Camera>> ___m_Cameras;

  /// @brief Field m_LayerMask, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_LayerMask;

  /// @brief Field m_MousePosition, offset: 0x1c, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_MousePosition;

  /// @brief Field m_TargetDisplay, offset: 0x24, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ___m_TargetDisplay;

  /// @brief Field m_Index, offset: 0x2c, size: 0x4, def value: None
  int32_t ___m_Index;

  /// @brief Field m_CurrentCamera, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ___m_CurrentCamera;

  /// @brief Field m_CurrentRay, offset: 0x38, size: 0x18, def value: None
  ::UnityEngine::Ray ___m_CurrentRay;

  /// @brief Field m_IsInsideCameraRect, offset: 0x50, size: 0x1, def value: None
  bool ___m_IsInsideCameraRect;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::CameraScreenRaycaster_CameraRayEnumerator, ___m_Cameras) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::CameraScreenRaycaster_CameraRayEnumerator, ___m_LayerMask) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::CameraScreenRaycaster_CameraRayEnumerator, ___m_MousePosition) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::CameraScreenRaycaster_CameraRayEnumerator, ___m_TargetDisplay) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::CameraScreenRaycaster_CameraRayEnumerator, ___m_Index) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::CameraScreenRaycaster_CameraRayEnumerator, ___m_CurrentCamera) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::CameraScreenRaycaster_CameraRayEnumerator, ___m_CurrentRay) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::CameraScreenRaycaster_CameraRayEnumerator, ___m_IsInsideCameraRect) == 0x50, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::CameraScreenRaycaster_CameraRayEnumerator) == 0x58, "Size mismatch!");

} // namespace UnityEngine::UIElements
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.CameraScreenRaycaster/<>c
class CORDL_TYPE CameraScreenRaycaster___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::CameraScreenRaycaster___c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0)) ::System::Comparison_1<::UnityW<::UnityEngine::Camera>>* __9__3_0;

  static inline ::UnityEngine::UIElements::CameraScreenRaycaster___c* New_ctor();

  /// @brief Method <Update>b__3_0, addr 0x7248a0c, size 0x94, virtual false, abstract: false, final false
  inline int32_t _Update_b__3_0(::UnityEngine::Camera* a, ::UnityEngine::Camera* b);

  /// @brief Method .ctor, addr 0x7248a08, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::CameraScreenRaycaster___c* getStaticF___9();

  static inline ::System::Comparison_1<::UnityW<::UnityEngine::Camera>>* getStaticF___9__3_0();

  static inline void setStaticF___9(::UnityEngine::UIElements::CameraScreenRaycaster___c* value);

  static inline void setStaticF___9__3_0(::System::Comparison_1<::UnityW<::UnityEngine::Camera>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CameraScreenRaycaster___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CameraScreenRaycaster___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CameraScreenRaycaster___c(CameraScreenRaycaster___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CameraScreenRaycaster___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CameraScreenRaycaster___c(CameraScreenRaycaster___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4630 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::CameraScreenRaycaster___c) == 0x10, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object, UnityEngine.Camera
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.CameraScreenRaycaster
class CORDL_TYPE CameraScreenRaycaster : public ::System::Object {
public:
  // Declarations
  using CameraRayEnumerator = ::UnityEngine::UIElements::CameraScreenRaycaster_CameraRayEnumerator;

  using __c = ::UnityEngine::UIElements::CameraScreenRaycaster___c;

  /// @brief Field cameras, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_cameras, put = __cordl_internal_set_cameras)) ::ArrayW<::UnityW<::UnityEngine::Camera>> cameras;

  /// @brief Field layerMask, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_layerMask, put = __cordl_internal_set_layerMask)) int32_t layerMask;

  /// @brief Field singleCamera, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_singleCamera, put = __cordl_internal_set_singleCamera)) ::ArrayW<::UnityW<::UnityEngine::Camera>> singleCamera;

  /// @brief Convert operator to "::UnityEngine::UIElements::IScreenRaycaster"
  constexpr operator ::UnityEngine::UIElements::IScreenRaycaster*() noexcept;

  /// @brief Method IsValid, addr 0x7248500, size 0xec, virtual false, abstract: false, final false
  static inline bool IsValid(::UnityEngine::Camera* camera, int32_t layerMask, ::System::Nullable_1<int32_t> targetDisplay);

  /// @brief Method MakeRay, addr 0x7248358, size 0xfc, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_3<::UnityEngine::Ray, ::UnityW<::UnityEngine::Camera>, bool>>*
  MakeRay(::UnityEngine::Vector2 mousePosition, int32_t pointerId, ::System::Nullable_1<int32_t> targetDisplay);

  /// @brief Method MakeRay, addr 0x72485ec, size 0x1a0, virtual false, abstract: false, final false
  static inline bool MakeRay(::UnityEngine::Camera* camera, ::UnityEngine::Vector2 mousePosition, ::by_ref<::UnityEngine::Ray> ray);

  static inline ::UnityEngine::UIElements::CameraScreenRaycaster* New_ctor();

  /// @brief Method Update, addr 0x7248254, size 0x104, virtual true, abstract: false, final false
  inline void Update();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Camera>> const& __cordl_internal_get_cameras() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Camera>>& __cordl_internal_get_cameras();

  constexpr int32_t const& __cordl_internal_get_layerMask() const;

  constexpr int32_t& __cordl_internal_get_layerMask();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Camera>> const& __cordl_internal_get_singleCamera() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Camera>>& __cordl_internal_get_singleCamera();

  constexpr void __cordl_internal_set_cameras(::ArrayW<::UnityW<::UnityEngine::Camera>> value);

  constexpr void __cordl_internal_set_layerMask(int32_t value);

  constexpr void __cordl_internal_set_singleCamera(::ArrayW<::UnityW<::UnityEngine::Camera>> value);

  /// @brief Method .ctor, addr 0x7245998, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::UIElements::IScreenRaycaster"
  constexpr ::UnityEngine::UIElements::IScreenRaycaster* i___UnityEngine__UIElements__IScreenRaycaster() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CameraScreenRaycaster();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CameraScreenRaycaster", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CameraScreenRaycaster(CameraScreenRaycaster&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CameraScreenRaycaster", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CameraScreenRaycaster(CameraScreenRaycaster const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4631 };

  /// @brief Field cameras, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Camera>> ___cameras;

  /// @brief Field singleCamera, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Camera>> ___singleCamera;

  /// @brief Field layerMask, offset: 0x20, size: 0x4, def value: None
  int32_t ___layerMask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::CameraScreenRaycaster, ___cameras) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::CameraScreenRaycaster, ___singleCamera) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::CameraScreenRaycaster, ___layerMask) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::CameraScreenRaycaster) == 0x28, "Size mismatch!");

} // namespace UnityEngine::UIElements
