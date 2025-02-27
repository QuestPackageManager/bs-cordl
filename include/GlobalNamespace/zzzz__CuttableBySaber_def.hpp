#pragma once
// IWYU pragma private; include "GlobalNamespace/CuttableBySaber.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
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
MARK_REF_PTR_T(::GlobalNamespace::CuttableBySaber);
MARK_REF_PTR_T(::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate);
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: CuttableBySaber/WasCutBySaberDelegate
class CORDL_TYPE CuttableBySaber_WasCutBySaberDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x3bf73ac, size 0xf0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x3bf749c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x3bf7388, size 0x24, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec);

  static inline ::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3bf7284, size 0x104, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4649 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate, 0x80>, "Size mismatch!");

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

  /// @brief Method CallWasCutBySaberEvent, addr 0x3bf70b8, size 0x2c, virtual false, abstract: false, final false
  inline void CallWasCutBySaberEvent(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec);

  /// @brief Method Cut, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Cut(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec);

  static inline ::GlobalNamespace::CuttableBySaber* New_ctor();

  constexpr ::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate* const& __cordl_internal_get_wasCutBySaberEvent() const;

  constexpr ::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate*& __cordl_internal_get_wasCutBySaberEvent();

  constexpr void __cordl_internal_set_wasCutBySaberEvent(::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate* value);

  /// @brief Method .ctor, addr 0x3bf7144, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_wasCutBySaberEvent, addr 0x3bf714c, size 0x9c, virtual false, abstract: false, final false
  inline void add_wasCutBySaberEvent(::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate* value);

  /// @brief Method get_canBeCut, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_canBeCut();

  /// @brief Method get_radius, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t get_radius();

  /// @brief Method remove_wasCutBySaberEvent, addr 0x3bf71e8, size 0x9c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4650 };

  /// @brief Field wasCutBySaberEvent, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate* ___wasCutBySaberEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CuttableBySaber, ___wasCutBySaberEvent) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CuttableBySaber, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CuttableBySaber);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CuttableBySaber*, "", "CuttableBySaber");
NEED_NO_BOX(::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate*, "", "CuttableBySaber/WasCutBySaberDelegate");
