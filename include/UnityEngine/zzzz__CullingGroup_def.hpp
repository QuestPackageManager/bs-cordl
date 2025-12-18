#pragma once
// IWYU pragma private; include "UnityEngine/CullingGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CullingGroup)
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
struct BoundingSphere;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct CullingGroupEvent;
}
namespace UnityEngine {
class CullingGroup_BindingsMarshaller;
}
namespace UnityEngine {
class CullingGroup_StateChanged;
}
namespace UnityEngine {
struct CullingQueryOptions;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class CullingGroup;
}
namespace UnityEngine {
class CullingGroup_BindingsMarshaller;
}
namespace UnityEngine {
class CullingGroup_StateChanged;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::CullingGroup);
MARK_REF_PTR_T(::UnityEngine::CullingGroup_BindingsMarshaller);
MARK_REF_PTR_T(::UnityEngine::CullingGroup_StateChanged);
// Dependencies System.MulticastDelegate
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.CullingGroup/StateChanged
class CORDL_TYPE CullingGroup_StateChanged : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x68a9404, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::CullingGroupEvent sphere);

  static inline ::UnityEngine::CullingGroup_StateChanged* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x68a9398, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CullingGroup_StateChanged();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CullingGroup_StateChanged", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CullingGroup_StateChanged(CullingGroup_StateChanged&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CullingGroup_StateChanged", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CullingGroup_StateChanged(CullingGroup_StateChanged const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10073 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::CullingGroup_StateChanged, 0x80>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.CullingGroup/BindingsMarshaller
class CORDL_TYPE CullingGroup_BindingsMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertToNative, addr 0x68a9418, size 0x14, virtual false, abstract: false, final false
  static inline ::System::IntPtr ConvertToNative(::UnityEngine::CullingGroup* cullingGroup);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CullingGroup_BindingsMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CullingGroup_BindingsMarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CullingGroup_BindingsMarshaller(CullingGroup_BindingsMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CullingGroup_BindingsMarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CullingGroup_BindingsMarshaller(CullingGroup_BindingsMarshaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10074 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::CullingGroup_BindingsMarshaller, 0x10>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.IntPtr, System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.CullingGroup
class CORDL_TYPE CullingGroup : public ::System::Object {
public:
  // Declarations
  using BindingsMarshaller = ::UnityEngine::CullingGroup_BindingsMarshaller;

  using StateChanged = ::UnityEngine::CullingGroup_StateChanged;

  /// @brief Field m_OnStateChanged, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnStateChanged, put = __cordl_internal_set_m_OnStateChanged)) ::UnityEngine::CullingGroup_StateChanged* m_OnStateChanged;

  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) ::System::IntPtr m_Ptr;

  __declspec(property(put = set_targetCamera)) ::UnityW<::UnityEngine::Camera> targetCamera;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x68a8d34, size 0x18, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method DisposeInternal, addr 0x68a8ca8, size 0x50, virtual false, abstract: false, final false
  inline void DisposeInternal();

  /// @brief Method DisposeInternal_Injected, addr 0x68a8cf8, size 0x3c, virtual false, abstract: false, final false
  static inline void DisposeInternal_Injected(::System::IntPtr _unity_self);

  /// @brief Method Finalize, addr 0x68a8c0c, size 0x4c, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method FinalizerFailure, addr 0x68a8c58, size 0x50, virtual false, abstract: false, final false
  inline void FinalizerFailure();

  /// @brief Method FinalizerFailure_Injected, addr 0x68a935c, size 0x3c, virtual false, abstract: false, final false
  static inline void FinalizerFailure_Injected(::System::IntPtr _unity_self);

  /// @brief Method Init, addr 0x68a8bd0, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr Init(::System::Object* scripting);

  static inline ::UnityEngine::CullingGroup* New_ctor();

  /// @brief Method QueryIndices, addr 0x68a8f88, size 0x120, virtual false, abstract: false, final false
  inline int32_t QueryIndices(bool visible, int32_t distanceIndex, ::UnityEngine::CullingQueryOptions options, ::ArrayW<int32_t, ::Array<int32_t>*> result, int32_t firstIndex);

  /// @brief Method QueryIndices, addr 0x68a8f74, size 0x14, virtual false, abstract: false, final false
  inline int32_t QueryIndices(bool visible, ::ArrayW<int32_t, ::Array<int32_t>*> result, int32_t firstIndex);

  /// @brief Method QueryIndices_Injected, addr 0x68a90a8, size 0x74, virtual false, abstract: false, final false
  static inline int32_t QueryIndices_Injected(::System::IntPtr _unity_self, bool visible, int32_t distanceIndex, ::UnityEngine::CullingQueryOptions options,
                                              ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> result, int32_t firstIndex);

  /// @brief Method SendEvents, addr 0x68a9300, size 0x5c, virtual false, abstract: false, final false
  static inline void SendEvents(::UnityEngine::CullingGroup* cullingGroup, ::System::IntPtr eventsPtr, int32_t count);

  /// @brief Method SetBoundingDistances, addr 0x68a911c, size 0xf0, virtual false, abstract: false, final false
  inline void SetBoundingDistances(::ArrayW<float_t, ::Array<float_t>*> distances);

  /// @brief Method SetBoundingDistances_Injected, addr 0x68a920c, size 0x44, virtual false, abstract: false, final false
  static inline void SetBoundingDistances_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> distances);

  /// @brief Method SetBoundingSphereCount, addr 0x68a8ed8, size 0x58, virtual false, abstract: false, final false
  inline void SetBoundingSphereCount(int32_t count);

  /// @brief Method SetBoundingSphereCount_Injected, addr 0x68a8f30, size 0x44, virtual false, abstract: false, final false
  static inline void SetBoundingSphereCount_Injected(::System::IntPtr _unity_self, int32_t count);

  /// @brief Method SetBoundingSpheres, addr 0x68a8e3c, size 0x58, virtual false, abstract: false, final false
  inline void SetBoundingSpheres(::ArrayW<::UnityEngine::BoundingSphere, ::Array<::UnityEngine::BoundingSphere>*> array);

  /// @brief Method SetBoundingSpheres_Injected, addr 0x68a8e94, size 0x44, virtual false, abstract: false, final false
  static inline void SetBoundingSpheres_Injected(::System::IntPtr _unity_self, ::ArrayW<::UnityEngine::BoundingSphere, ::Array<::UnityEngine::BoundingSphere>*> array);

  /// @brief Method SetDistanceReferencePoint, addr 0x68a92fc, size 0x4, virtual false, abstract: false, final false
  inline void SetDistanceReferencePoint(::UnityEngine::Vector3 point);

  /// @brief Method SetDistanceReferencePoint_InternalVector3, addr 0x68a9250, size 0x68, virtual false, abstract: false, final false
  inline void SetDistanceReferencePoint_InternalVector3(::UnityEngine::Vector3 point);

  /// @brief Method SetDistanceReferencePoint_InternalVector3_Injected, addr 0x68a92b8, size 0x44, virtual false, abstract: false, final false
  static inline void SetDistanceReferencePoint_InternalVector3_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> point);

  constexpr ::UnityEngine::CullingGroup_StateChanged* const& __cordl_internal_get_m_OnStateChanged() const;

  constexpr ::UnityEngine::CullingGroup_StateChanged*& __cordl_internal_get_m_OnStateChanged();

  constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr();

  constexpr void __cordl_internal_set_m_OnStateChanged(::UnityEngine::CullingGroup_StateChanged* value);

  constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr value);

  /// @brief Method .ctor, addr 0x68a8b88, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_targetCamera, addr 0x68a8d4c, size 0xac, virtual false, abstract: false, final false
  inline void set_targetCamera(::UnityEngine::Camera* value);

  /// @brief Method set_targetCamera_Injected, addr 0x68a8df8, size 0x44, virtual false, abstract: false, final false
  static inline void set_targetCamera_Injected(::System::IntPtr _unity_self, ::System::IntPtr value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CullingGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CullingGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CullingGroup(CullingGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CullingGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CullingGroup(CullingGroup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10075 };

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_Ptr;

  /// @brief Field m_OnStateChanged, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::CullingGroup_StateChanged* ___m_OnStateChanged;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::CullingGroup, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::CullingGroup, ___m_OnStateChanged) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::CullingGroup, 0x20>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::CullingGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CullingGroup*, "UnityEngine", "CullingGroup");
NEED_NO_BOX(::UnityEngine::CullingGroup_BindingsMarshaller);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CullingGroup_BindingsMarshaller*, "UnityEngine", "CullingGroup/BindingsMarshaller");
NEED_NO_BOX(::UnityEngine::CullingGroup_StateChanged);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CullingGroup_StateChanged*, "UnityEngine", "CullingGroup/StateChanged");
