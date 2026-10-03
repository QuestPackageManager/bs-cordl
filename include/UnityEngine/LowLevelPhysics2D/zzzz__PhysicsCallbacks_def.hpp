#pragma once
// IWYU pragma private; include "UnityEngine/LowLevelPhysics2D/PhysicsCallbacks.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsEvents_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsLowLevelScripting2D_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PhysicsCallbacks)
namespace System {
class IDisposable;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace UnityEngine::LowLevelPhysics2D {
struct BodyUpdateCallbackTargets_PhysicsCallbacks_BodyUpdateTarget;
}
namespace UnityEngine::LowLevelPhysics2D {
struct ContactCallbackTargets_PhysicsCallbacks_ContactBeginTarget;
}
namespace UnityEngine::LowLevelPhysics2D {
struct ContactCallbackTargets_PhysicsCallbacks_ContactEndTarget;
}
namespace UnityEngine::LowLevelPhysics2D {
struct JointThresholdCallbackTargets_PhysicsCallbacks_JointThresholdTarget;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsCallbacks_BodyUpdateCallbackTargets;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsCallbacks_ContactCallbackTargets;
}
namespace UnityEngine::LowLevelPhysics2D {
class PhysicsCallbacks_IBodyUpdateCallback;
}
namespace UnityEngine::LowLevelPhysics2D {
class PhysicsCallbacks_IContactCallback;
}
namespace UnityEngine::LowLevelPhysics2D {
class PhysicsCallbacks_IContactFilterCallback;
}
namespace UnityEngine::LowLevelPhysics2D {
class PhysicsCallbacks_IJointThresholdCallback;
}
namespace UnityEngine::LowLevelPhysics2D {
class PhysicsCallbacks_IPreSolveCallback;
}
namespace UnityEngine::LowLevelPhysics2D {
class PhysicsCallbacks_ITriggerCallback;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsCallbacks_JointThresholdCallbackTargets;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsCallbacks_TriggerCallbackTargets;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsEvents_BodyUpdateEvent;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsEvents_ContactBeginEvent;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsEvents_ContactEndEvent;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsEvents_ContactFilterEvent;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsEvents_JointThresholdEvent;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsEvents_PreSolveEvent;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsEvents_TriggerBeginEvent;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsEvents_TriggerEndEvent;
}
namespace UnityEngine::LowLevelPhysics2D {
struct TriggerCallbackTargets_PhysicsCallbacks_TriggerBeginTarget;
}
namespace UnityEngine::LowLevelPhysics2D {
struct TriggerCallbackTargets_PhysicsCallbacks_TriggerEndTarget;
}
// Forward declare root types
namespace UnityEngine::LowLevelPhysics2D {
class PhysicsCallbacks_IBodyUpdateCallback;
}
namespace UnityEngine::LowLevelPhysics2D {
class PhysicsCallbacks_IContactCallback;
}
namespace UnityEngine::LowLevelPhysics2D {
class PhysicsCallbacks_IContactFilterCallback;
}
namespace UnityEngine::LowLevelPhysics2D {
class PhysicsCallbacks_IJointThresholdCallback;
}
namespace UnityEngine::LowLevelPhysics2D {
class PhysicsCallbacks_IPreSolveCallback;
}
namespace UnityEngine::LowLevelPhysics2D {
class PhysicsCallbacks_ITriggerCallback;
}
namespace UnityEngine::LowLevelPhysics2D {
struct BodyUpdateCallbackTargets_PhysicsCallbacks_BodyUpdateTarget;
}
namespace UnityEngine::LowLevelPhysics2D {
struct ContactCallbackTargets_PhysicsCallbacks_ContactBeginTarget;
}
namespace UnityEngine::LowLevelPhysics2D {
struct ContactCallbackTargets_PhysicsCallbacks_ContactEndTarget;
}
namespace UnityEngine::LowLevelPhysics2D {
struct JointThresholdCallbackTargets_PhysicsCallbacks_JointThresholdTarget;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsCallbacks;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsCallbacks_BodyUpdateCallbackTargets;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsCallbacks_ContactCallbackTargets;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsCallbacks_JointThresholdCallbackTargets;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsCallbacks_TriggerCallbackTargets;
}
namespace UnityEngine::LowLevelPhysics2D {
struct TriggerCallbackTargets_PhysicsCallbacks_TriggerBeginTarget;
}
namespace UnityEngine::LowLevelPhysics2D {
struct TriggerCallbackTargets_PhysicsCallbacks_TriggerEndTarget;
}
// Write type traits
MARK_REF_T(::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IBodyUpdateCallback*);
MARK_REF_T(::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IContactCallback*);
MARK_REF_T(::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IContactFilterCallback*);
MARK_REF_T(::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IJointThresholdCallback*);
MARK_REF_T(::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IPreSolveCallback*);
MARK_REF_T(::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ITriggerCallback*);
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::BodyUpdateCallbackTargets_PhysicsCallbacks_BodyUpdateTarget);
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactBeginTarget);
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactEndTarget);
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::JointThresholdCallbackTargets_PhysicsCallbacks_JointThresholdTarget);
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks);
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_BodyUpdateCallbackTargets);
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ContactCallbackTargets);
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_JointThresholdCallbackTargets);
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_TriggerCallbackTargets);
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerBeginTarget);
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerEndTarget);
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IBodyUpdateCallback*, "UnityEngine.LowLevelPhysics2D", "PhysicsCallbacks/IBodyUpdateCallback");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IContactCallback*, "UnityEngine.LowLevelPhysics2D", "PhysicsCallbacks/IContactCallback");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IContactFilterCallback*, "UnityEngine.LowLevelPhysics2D", "PhysicsCallbacks/IContactFilterCallback");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IJointThresholdCallback*, "UnityEngine.LowLevelPhysics2D", "PhysicsCallbacks/IJointThresholdCallback");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IPreSolveCallback*, "UnityEngine.LowLevelPhysics2D", "PhysicsCallbacks/IPreSolveCallback");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ITriggerCallback*, "UnityEngine.LowLevelPhysics2D", "PhysicsCallbacks/ITriggerCallback");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::BodyUpdateCallbackTargets_PhysicsCallbacks_BodyUpdateTarget, "UnityEngine.LowLevelPhysics2D",
                    "PhysicsCallbacks/BodyUpdateCallbackTargets/BodyUpdateTarget");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactBeginTarget, "UnityEngine.LowLevelPhysics2D",
                    "PhysicsCallbacks/ContactCallbackTargets/ContactBeginTarget");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactEndTarget, "UnityEngine.LowLevelPhysics2D",
                    "PhysicsCallbacks/ContactCallbackTargets/ContactEndTarget");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::JointThresholdCallbackTargets_PhysicsCallbacks_JointThresholdTarget, "UnityEngine.LowLevelPhysics2D",
                    "PhysicsCallbacks/JointThresholdCallbackTargets/JointThresholdTarget");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks, "UnityEngine.LowLevelPhysics2D", "PhysicsCallbacks");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_BodyUpdateCallbackTargets, "UnityEngine.LowLevelPhysics2D", "PhysicsCallbacks/BodyUpdateCallbackTargets");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ContactCallbackTargets, "UnityEngine.LowLevelPhysics2D", "PhysicsCallbacks/ContactCallbackTargets");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_JointThresholdCallbackTargets, "UnityEngine.LowLevelPhysics2D", "PhysicsCallbacks/JointThresholdCallbackTargets");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_TriggerCallbackTargets, "UnityEngine.LowLevelPhysics2D", "PhysicsCallbacks/TriggerCallbackTargets");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerBeginTarget, "UnityEngine.LowLevelPhysics2D",
                    "PhysicsCallbacks/TriggerCallbackTargets/TriggerBeginTarget");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerEndTarget, "UnityEngine.LowLevelPhysics2D",
                    "PhysicsCallbacks/TriggerCallbackTargets/TriggerEndTarget");
// Dependencies
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: false
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsCallbacks/IBodyUpdateCallback
class CORDL_TYPE PhysicsCallbacks_IBodyUpdateCallback {
public:
  // Declarations
  /// @brief Method OnBodyUpdate2D, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnBodyUpdate2D(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_BodyUpdateEvent bodyUpdateEvent);

  // Ctor Parameters [CppParam { name: "", ty: "PhysicsCallbacks_IBodyUpdateCallback", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PhysicsCallbacks_IBodyUpdateCallback(PhysicsCallbacks_IBodyUpdateCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21530 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::LowLevelPhysics2D
// Dependencies
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: false
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsCallbacks/IContactFilterCallback
class CORDL_TYPE PhysicsCallbacks_IContactFilterCallback {
public:
  // Declarations
  /// @brief Method OnContactFilter2D, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool OnContactFilter2D(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactFilterEvent contactFilterEvent);

  // Ctor Parameters [CppParam { name: "", ty: "PhysicsCallbacks_IContactFilterCallback", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PhysicsCallbacks_IContactFilterCallback(PhysicsCallbacks_IContactFilterCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21531 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::LowLevelPhysics2D
// Dependencies
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: false
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsCallbacks/IPreSolveCallback
class CORDL_TYPE PhysicsCallbacks_IPreSolveCallback {
public:
  // Declarations
  /// @brief Method OnPreSolve2D, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool OnPreSolve2D(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent preSolveEvent);

  // Ctor Parameters [CppParam { name: "", ty: "PhysicsCallbacks_IPreSolveCallback", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PhysicsCallbacks_IPreSolveCallback(PhysicsCallbacks_IPreSolveCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21532 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::LowLevelPhysics2D
// Dependencies
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: false
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsCallbacks/ITriggerCallback
class CORDL_TYPE PhysicsCallbacks_ITriggerCallback {
public:
  // Declarations
  /// @brief Method OnTriggerBegin2D, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnTriggerBegin2D(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerBeginEvent beginEvent);

  /// @brief Method OnTriggerEnd2D, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnTriggerEnd2D(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerEndEvent endEvent);

  // Ctor Parameters [CppParam { name: "", ty: "PhysicsCallbacks_ITriggerCallback", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PhysicsCallbacks_ITriggerCallback(PhysicsCallbacks_ITriggerCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21533 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::LowLevelPhysics2D
// Dependencies
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: false
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsCallbacks/IContactCallback
class CORDL_TYPE PhysicsCallbacks_IContactCallback {
public:
  // Declarations
  /// @brief Method OnContactBegin2D, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnContactBegin2D(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactBeginEvent beginEvent);

  /// @brief Method OnContactEnd2D, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnContactEnd2D(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactEndEvent endEvent);

  // Ctor Parameters [CppParam { name: "", ty: "PhysicsCallbacks_IContactCallback", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PhysicsCallbacks_IContactCallback(PhysicsCallbacks_IContactCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21534 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::LowLevelPhysics2D
// Dependencies
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: false
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsCallbacks/IJointThresholdCallback
class CORDL_TYPE PhysicsCallbacks_IJointThresholdCallback {
public:
  // Declarations
  /// @brief Method OnJointThreshold2D, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnJointThreshold2D(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_JointThresholdEvent thresholdEvent);

  // Ctor Parameters [CppParam { name: "", ty: "PhysicsCallbacks_IJointThresholdCallback", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PhysicsCallbacks_IJointThresholdCallback(PhysicsCallbacks_IJointThresholdCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21535 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::LowLevelPhysics2D
// [IsReadOnly]
// Dependencies UnityEngine.LowLevelPhysics2D.PhysicsEvents::BodyUpdateEvent
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsCallbacks/BodyUpdateCallbackTargets/BodyUpdateTarget
struct CORDL_TYPE BodyUpdateCallbackTargets_PhysicsCallbacks_BodyUpdateTarget {
public:
  // Declarations
  __declspec(property(get = get_bodyTarget)) ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IBodyUpdateCallback* bodyTarget;

  __declspec(property(get = get_bodyUpdateEvent)) ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_BodyUpdateEvent bodyUpdateEvent;

  /// @brief Method get_bodyTarget, addr 0x6fd5540, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IBodyUpdateCallback* get_bodyTarget();

  /// @brief Method get_bodyUpdateEvent, addr 0x6fd552c, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_BodyUpdateEvent get_bodyUpdateEvent();

  // Ctor Parameters []
  // @brief default ctor
  constexpr BodyUpdateCallbackTargets_PhysicsCallbacks_BodyUpdateTarget();

  // Ctor Parameters [CppParam { name: "m_BodyUpdateEvent", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsEvents_BodyUpdateEvent", modifiers: "", def_value: None, comment: None }]
  constexpr BodyUpdateCallbackTargets_PhysicsCallbacks_BodyUpdateTarget(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_BodyUpdateEvent m_BodyUpdateEvent) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21536 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field m_BodyUpdateEvent, offset: 0x0, size: 0x28, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_BodyUpdateEvent m_BodyUpdateEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::BodyUpdateCallbackTargets_PhysicsCallbacks_BodyUpdateTarget, m_BodyUpdateEvent) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::BodyUpdateCallbackTargets_PhysicsCallbacks_BodyUpdateTarget) == 0x28, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
// [IsReadOnly]
// Dependencies UnityEngine.LowLevelPhysics2D.PhysicsLowLevelScripting2D::PhysicsBuffer
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsCallbacks/BodyUpdateCallbackTargets
struct CORDL_TYPE PhysicsCallbacks_BodyUpdateCallbackTargets {
public:
  // Declarations
  using BodyUpdateTarget = ::UnityEngine::LowLevelPhysics2D::BodyUpdateCallbackTargets_PhysicsCallbacks_BodyUpdateTarget;

  __declspec(property(get = get_bodyUpdateCallbackTargets)) ::System::ReadOnlySpan_1<::UnityEngine::LowLevelPhysics2D::BodyUpdateCallbackTargets_PhysicsCallbacks_BodyUpdateTarget>
      bodyUpdateCallbackTargets;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x6fd54dc, size 0x50, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method get_bodyUpdateCallbackTargets, addr 0x6fd5490, size 0x4c, virtual false, abstract: false, final false
  inline ::System::ReadOnlySpan_1<::UnityEngine::LowLevelPhysics2D::BodyUpdateCallbackTargets_PhysicsCallbacks_BodyUpdateTarget> get_bodyUpdateCallbackTargets();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsCallbacks_BodyUpdateCallbackTargets();

  // Ctor Parameters [CppParam { name: "m_BodyUpdateCallbackTargets", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer", modifiers: "", def_value: None, comment: None }]
  constexpr PhysicsCallbacks_BodyUpdateCallbackTargets(::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer m_BodyUpdateCallbackTargets) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21537 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_BodyUpdateCallbackTargets, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer m_BodyUpdateCallbackTargets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_BodyUpdateCallbackTargets, m_BodyUpdateCallbackTargets) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_BodyUpdateCallbackTargets) == 0x10, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
// [IsReadOnly]
// Dependencies UnityEngine.LowLevelPhysics2D.PhysicsEvents::TriggerBeginEvent
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsCallbacks/TriggerCallbackTargets/TriggerBeginTarget
struct CORDL_TYPE TriggerCallbackTargets_PhysicsCallbacks_TriggerBeginTarget {
public:
  // Declarations
  __declspec(property(get = get_beginEvent)) ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerBeginEvent beginEvent;

  __declspec(property(get = get_triggerShapeTarget)) ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ITriggerCallback* triggerShapeTarget;

  __declspec(property(get = get_visitorShapeTarget)) ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ITriggerCallback* visitorShapeTarget;

  /// @brief Method get_beginEvent, addr 0x6fd5738, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerBeginEvent get_beginEvent();

  /// @brief Method get_triggerShapeTarget, addr 0x6fd5744, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ITriggerCallback* get_triggerShapeTarget();

  /// @brief Method get_visitorShapeTarget, addr 0x6fd5890, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ITriggerCallback* get_visitorShapeTarget();

  // Ctor Parameters []
  // @brief default ctor
  constexpr TriggerCallbackTargets_PhysicsCallbacks_TriggerBeginTarget();

  // Ctor Parameters [CppParam { name: "m_BeginEvent", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerBeginEvent", modifiers: "", def_value: None, comment: None }]
  constexpr TriggerCallbackTargets_PhysicsCallbacks_TriggerBeginTarget(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerBeginEvent m_BeginEvent) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21538 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_BeginEvent, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerBeginEvent m_BeginEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerBeginTarget, m_BeginEvent) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerBeginTarget) == 0x10, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
// [IsReadOnly]
// Dependencies UnityEngine.LowLevelPhysics2D.PhysicsEvents::TriggerEndEvent
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsCallbacks/TriggerCallbackTargets/TriggerEndTarget
struct CORDL_TYPE TriggerCallbackTargets_PhysicsCallbacks_TriggerEndTarget {
public:
  // Declarations
  __declspec(property(get = get_endEvent)) ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerEndEvent endEvent;

  __declspec(property(get = get_triggerShapeTarget)) ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ITriggerCallback* triggerShapeTarget;

  __declspec(property(get = get_visitorShapeTarget)) ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ITriggerCallback* visitorShapeTarget;

  /// @brief Method get_endEvent, addr 0x6fd5950, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerEndEvent get_endEvent();

  /// @brief Method get_triggerShapeTarget, addr 0x6fd595c, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ITriggerCallback* get_triggerShapeTarget();

  /// @brief Method get_visitorShapeTarget, addr 0x6fd5a1c, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ITriggerCallback* get_visitorShapeTarget();

  // Ctor Parameters []
  // @brief default ctor
  constexpr TriggerCallbackTargets_PhysicsCallbacks_TriggerEndTarget();

  // Ctor Parameters [CppParam { name: "m_EndEvent", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerEndEvent", modifiers: "", def_value: None, comment: None }]
  constexpr TriggerCallbackTargets_PhysicsCallbacks_TriggerEndTarget(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerEndEvent m_EndEvent) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21539 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_EndEvent, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerEndEvent m_EndEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerEndTarget, m_EndEvent) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerEndTarget) == 0x10, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
// [IsReadOnly]
// Dependencies UnityEngine.LowLevelPhysics2D.PhysicsLowLevelScripting2D::PhysicsBuffer
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsCallbacks/TriggerCallbackTargets
struct CORDL_TYPE PhysicsCallbacks_TriggerCallbackTargets {
public:
  // Declarations
  using TriggerBeginTarget = ::UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerBeginTarget;

  using TriggerEndTarget = ::UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerEndTarget;

  __declspec(property(get = get_BeginCallbackTargets)) ::System::ReadOnlySpan_1<::UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerBeginTarget> BeginCallbackTargets;

  __declspec(property(get = get_EndCallbackTargets)) ::System::ReadOnlySpan_1<::UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerEndTarget> EndCallbackTargets;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x6fd5698, size 0xa0, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method get_BeginCallbackTargets, addr 0x6fd5600, size 0x4c, virtual false, abstract: false, final false
  inline ::System::ReadOnlySpan_1<::UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerBeginTarget> get_BeginCallbackTargets();

  /// @brief Method get_EndCallbackTargets, addr 0x6fd564c, size 0x4c, virtual false, abstract: false, final false
  inline ::System::ReadOnlySpan_1<::UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerEndTarget> get_EndCallbackTargets();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsCallbacks_TriggerCallbackTargets();

  // Ctor Parameters [CppParam { name: "m_BeginCallbackTargets", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "m_EndCallbackTargets", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer", modifiers: "", def_value: None, comment: None }]
  constexpr PhysicsCallbacks_TriggerCallbackTargets(::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer m_BeginCallbackTargets,
                                                    ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer m_EndCallbackTargets) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21540 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field m_BeginCallbackTargets, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer m_BeginCallbackTargets;

  /// @brief Field m_EndCallbackTargets, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer m_EndCallbackTargets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_TriggerCallbackTargets, m_BeginCallbackTargets) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_TriggerCallbackTargets, m_EndCallbackTargets) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_TriggerCallbackTargets) == 0x20, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
// [IsReadOnly]
// Dependencies UnityEngine.LowLevelPhysics2D.PhysicsEvents::ContactBeginEvent
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsCallbacks/ContactCallbackTargets/ContactBeginTarget
struct CORDL_TYPE ContactCallbackTargets_PhysicsCallbacks_ContactBeginTarget {
public:
  // Declarations
  __declspec(property(get = get_beginEvent)) ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactBeginEvent beginEvent;

  __declspec(property(get = get_shapeTargetA)) ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IContactCallback* shapeTargetA;

  __declspec(property(get = get_shapeTargetB)) ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IContactCallback* shapeTargetB;

  /// @brief Method get_beginEvent, addr 0x6fd5c14, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactBeginEvent get_beginEvent();

  /// @brief Method get_shapeTargetA, addr 0x6fd5c28, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IContactCallback* get_shapeTargetA();

  /// @brief Method get_shapeTargetB, addr 0x6fd5ce8, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IContactCallback* get_shapeTargetB();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ContactCallbackTargets_PhysicsCallbacks_ContactBeginTarget();

  // Ctor Parameters [CppParam { name: "m_BeginEvent", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactBeginEvent", modifiers: "", def_value: None, comment: None }]
  constexpr ContactCallbackTargets_PhysicsCallbacks_ContactBeginTarget(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactBeginEvent m_BeginEvent) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21541 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1c };

  /// @brief Field m_BeginEvent, offset: 0x0, size: 0x1c, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactBeginEvent m_BeginEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactBeginTarget, m_BeginEvent) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactBeginTarget) == 0x1c, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
// [IsReadOnly]
// Dependencies UnityEngine.LowLevelPhysics2D.PhysicsEvents::ContactEndEvent
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsCallbacks/ContactCallbackTargets/ContactEndTarget
struct CORDL_TYPE ContactCallbackTargets_PhysicsCallbacks_ContactEndTarget {
public:
  // Declarations
  __declspec(property(get = get_endEvent)) ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactEndEvent endEvent;

  __declspec(property(get = get_shapeTargetA)) ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IContactCallback* shapeTargetA;

  __declspec(property(get = get_shapeTargetB)) ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IContactCallback* shapeTargetB;

  /// @brief Method get_endEvent, addr 0x6fd5da8, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactEndEvent get_endEvent();

  /// @brief Method get_shapeTargetA, addr 0x6fd5dbc, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IContactCallback* get_shapeTargetA();

  /// @brief Method get_shapeTargetB, addr 0x6fd5e7c, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IContactCallback* get_shapeTargetB();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ContactCallbackTargets_PhysicsCallbacks_ContactEndTarget();

  // Ctor Parameters [CppParam { name: "m_EndEvent", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactEndEvent", modifiers: "", def_value: None, comment: None }]
  constexpr ContactCallbackTargets_PhysicsCallbacks_ContactEndTarget(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactEndEvent m_EndEvent) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21542 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1c };

  /// @brief Field m_EndEvent, offset: 0x0, size: 0x1c, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactEndEvent m_EndEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactEndTarget, m_EndEvent) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactEndTarget) == 0x1c, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
// [IsReadOnly]
// Dependencies UnityEngine.LowLevelPhysics2D.PhysicsLowLevelScripting2D::PhysicsBuffer
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsCallbacks/ContactCallbackTargets
struct CORDL_TYPE PhysicsCallbacks_ContactCallbackTargets {
public:
  // Declarations
  using ContactBeginTarget = ::UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactBeginTarget;

  using ContactEndTarget = ::UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactEndTarget;

  __declspec(property(get = get_BeginCallbackTargets)) ::System::ReadOnlySpan_1<::UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactBeginTarget> BeginCallbackTargets;

  __declspec(property(get = get_EndCallbackTargets)) ::System::ReadOnlySpan_1<::UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactEndTarget> EndCallbackTargets;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x6fd5b74, size 0xa0, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method get_BeginCallbackTargets, addr 0x6fd5adc, size 0x4c, virtual false, abstract: false, final false
  inline ::System::ReadOnlySpan_1<::UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactBeginTarget> get_BeginCallbackTargets();

  /// @brief Method get_EndCallbackTargets, addr 0x6fd5b28, size 0x4c, virtual false, abstract: false, final false
  inline ::System::ReadOnlySpan_1<::UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactEndTarget> get_EndCallbackTargets();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsCallbacks_ContactCallbackTargets();

  // Ctor Parameters [CppParam { name: "m_BeginCallbackTargets", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "m_EndCallbackTargets", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer", modifiers: "", def_value: None, comment: None }]
  constexpr PhysicsCallbacks_ContactCallbackTargets(::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer m_BeginCallbackTargets,
                                                    ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer m_EndCallbackTargets) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21543 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field m_BeginCallbackTargets, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer m_BeginCallbackTargets;

  /// @brief Field m_EndCallbackTargets, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer m_EndCallbackTargets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ContactCallbackTargets, m_BeginCallbackTargets) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ContactCallbackTargets, m_EndCallbackTargets) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ContactCallbackTargets) == 0x20, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
// [IsReadOnly]
// Dependencies UnityEngine.LowLevelPhysics2D.PhysicsEvents::JointThresholdEvent
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsCallbacks/JointThresholdCallbackTargets/JointThresholdTarget
struct CORDL_TYPE JointThresholdCallbackTargets_PhysicsCallbacks_JointThresholdTarget {
public:
  // Declarations
  __declspec(property(get = get_jointTarget)) ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IJointThresholdCallback* jointTarget;

  __declspec(property(get = get_jointThresholdEvent)) ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_JointThresholdEvent jointThresholdEvent;

  /// @brief Method get_jointTarget, addr 0x6fd5fe4, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IJointThresholdCallback* get_jointTarget();

  /// @brief Method get_jointThresholdEvent, addr 0x6fd5fd8, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_JointThresholdEvent get_jointThresholdEvent();

  // Ctor Parameters []
  // @brief default ctor
  constexpr JointThresholdCallbackTargets_PhysicsCallbacks_JointThresholdTarget();

  // Ctor Parameters [CppParam { name: "m_JointThresholdEvent", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsEvents_JointThresholdEvent", modifiers: "", def_value: None, comment: None }]
  constexpr JointThresholdCallbackTargets_PhysicsCallbacks_JointThresholdTarget(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_JointThresholdEvent m_JointThresholdEvent) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21544 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_JointThresholdEvent, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_JointThresholdEvent m_JointThresholdEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::JointThresholdCallbackTargets_PhysicsCallbacks_JointThresholdTarget, m_JointThresholdEvent) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::JointThresholdCallbackTargets_PhysicsCallbacks_JointThresholdTarget) == 0x10, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
// [IsReadOnly]
// Dependencies UnityEngine.LowLevelPhysics2D.PhysicsLowLevelScripting2D::PhysicsBuffer
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsCallbacks/JointThresholdCallbackTargets
struct CORDL_TYPE PhysicsCallbacks_JointThresholdCallbackTargets {
public:
  // Declarations
  using JointThresholdTarget = ::UnityEngine::LowLevelPhysics2D::JointThresholdCallbackTargets_PhysicsCallbacks_JointThresholdTarget;

  __declspec(property(get = get_jointThresholdCallbackTargets)) ::System::ReadOnlySpan_1<::UnityEngine::LowLevelPhysics2D::JointThresholdCallbackTargets_PhysicsCallbacks_JointThresholdTarget>
      jointThresholdCallbackTargets;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x6fd5f88, size 0x50, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method get_jointThresholdCallbackTargets, addr 0x6fd5f3c, size 0x4c, virtual false, abstract: false, final false
  inline ::System::ReadOnlySpan_1<::UnityEngine::LowLevelPhysics2D::JointThresholdCallbackTargets_PhysicsCallbacks_JointThresholdTarget> get_jointThresholdCallbackTargets();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsCallbacks_JointThresholdCallbackTargets();

  // Ctor Parameters [CppParam { name: "m_JointThresholdCallbackTargets", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer", modifiers: "", def_value: None, comment:
  // None }]
  constexpr PhysicsCallbacks_JointThresholdCallbackTargets(::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer m_JointThresholdCallbackTargets) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21545 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_JointThresholdCallbackTargets, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer m_JointThresholdCallbackTargets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_JointThresholdCallbackTargets, m_JointThresholdCallbackTargets) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_JointThresholdCallbackTargets) == 0x10, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
// [IsReadOnly]
// Dependencies
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsCallbacks
#pragma pack(push, 0)
struct CORDL_TYPE PhysicsCallbacks {
public:
  // Declarations
  using BodyUpdateCallbackTargets = ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_BodyUpdateCallbackTargets;

  using ContactCallbackTargets = ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ContactCallbackTargets;

  using IBodyUpdateCallback = ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IBodyUpdateCallback;

  using IContactCallback = ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IContactCallback;

  using IContactFilterCallback = ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IContactFilterCallback;

  using IJointThresholdCallback = ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IJointThresholdCallback;

  using IPreSolveCallback = ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IPreSolveCallback;

  using ITriggerCallback = ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ITriggerCallback;

  using JointThresholdCallbackTargets = ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_JointThresholdCallbackTargets;

  using TriggerCallbackTargets = ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_TriggerCallbackTargets;

  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsCallbacks();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21546 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks) == 0x1, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
