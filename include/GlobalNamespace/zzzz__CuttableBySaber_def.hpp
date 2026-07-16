#pragma once
// IWYU pragma private; include "GlobalNamespace/CuttableBySaber.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CuttableBySaber)
namespace GlobalNamespace {
class CuttableBySaber_WasCutBySaberDelegate;
}
namespace GlobalNamespace {
class Saber;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class CuttableBySaber;
}
namespace GlobalNamespace {
class CuttableBySaber_WasCutBySaberDelegate;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CuttableBySaber*);
MARK_REF_T(::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CuttableBySaber*, "", "CuttableBySaber");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate*, "", "CuttableBySaber/WasCutBySaberDelegate");
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: CuttableBySaber/WasCutBySaberDelegate
class CORDL_TYPE CuttableBySaber_WasCutBySaberDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x59e7e74, size 0xf4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x59e7f68, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x59e7e50, size 0x24, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec);

  static inline ::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x59e7d08, size 0x148, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CuttableBySaber_WasCutBySaberDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CuttableBySaber_WasCutBySaberDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CuttableBySaber_WasCutBySaberDelegate(CuttableBySaber_WasCutBySaberDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CuttableBySaber_WasCutBySaberDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CuttableBySaber_WasCutBySaberDelegate(CuttableBySaber_WasCutBySaberDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6192 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate) == 0x80, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CuttableBySaber
class CORDL_TYPE CuttableBySaber : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using WasCutBySaberDelegate = ::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate;

  __declspec(property(get = get_canBeCut, put = set_canBeCut)) bool canBeCut;

  __declspec(property(get = get_radius)) float_t radius;

  /// @brief Field wasCutBySaberEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_wasCutBySaberEvent, put = __cordl_internal_set_wasCutBySaberEvent)) ::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate* wasCutBySaberEvent;

  /// @brief Method CallWasCutBySaberEvent, addr 0x59e7b24, size 0x2c, virtual false, abstract: false, final false
  inline void CallWasCutBySaberEvent(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec);

  /// @brief Method Cut, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Cut(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec);

  static inline ::GlobalNamespace::CuttableBySaber* New_ctor();

  constexpr ::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate* const& __cordl_internal_get_wasCutBySaberEvent() const;

  constexpr ::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate*& __cordl_internal_get_wasCutBySaberEvent();

  constexpr void __cordl_internal_set_wasCutBySaberEvent(::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate* value);

  /// @brief Method .ctor, addr 0x59e7bac, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_wasCutBySaberEvent, addr 0x59e7bb0, size 0xac, virtual false, abstract: false, final false
  inline void add_wasCutBySaberEvent(::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate* value);

  /// @brief Method get_canBeCut, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_canBeCut();

  /// @brief Method get_radius, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t get_radius();

  /// @brief Method remove_wasCutBySaberEvent, addr 0x59e7c5c, size 0xac, virtual false, abstract: false, final false
  inline void remove_wasCutBySaberEvent(::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate* value);

  /// @brief Method set_canBeCut, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_canBeCut(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CuttableBySaber();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CuttableBySaber", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CuttableBySaber(CuttableBySaber&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CuttableBySaber", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CuttableBySaber(CuttableBySaber const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6193 };

  /// @brief Field wasCutBySaberEvent, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate* ___wasCutBySaberEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CuttableBySaber, ___wasCutBySaberEvent) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CuttableBySaber) == 0x28, "Size mismatch!");

} // namespace GlobalNamespace
