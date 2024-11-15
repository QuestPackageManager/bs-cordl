#pragma once
// IWYU pragma private; include "GlobalNamespace/CuttableBySaber.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CuttableBySaber)
namespace GlobalNamespace {
class Saber;
}
namespace GlobalNamespace {
class __CuttableBySaber__WasCutBySaberDelegate;
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
class __CuttableBySaber__WasCutBySaberDelegate;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CuttableBySaber);
MARK_REF_PTR_T(::GlobalNamespace::__CuttableBySaber__WasCutBySaberDelegate);
// Type: ::WasCutBySaberDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CuttableBySaber::WasCutBySaberDelegate*
class CORDL_TYPE __CuttableBySaber__WasCutBySaberDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x3b83fb4, size 0xf0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x3b840a4, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x3b83f90, size 0x24, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec);

  static inline ::GlobalNamespace::__CuttableBySaber__WasCutBySaberDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3b83e8c, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CuttableBySaber__WasCutBySaberDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__CuttableBySaber__WasCutBySaberDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CuttableBySaber__WasCutBySaberDelegate(__CuttableBySaber__WasCutBySaberDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CuttableBySaber__WasCutBySaberDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CuttableBySaber__WasCutBySaberDelegate(__CuttableBySaber__WasCutBySaberDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4633 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CuttableBySaber__WasCutBySaberDelegate, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::CuttableBySaber
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CuttableBySaber*
class CORDL_TYPE CuttableBySaber : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using WasCutBySaberDelegate = ::GlobalNamespace::__CuttableBySaber__WasCutBySaberDelegate;

  __declspec(property(get = get_canBeCut, put = set_canBeCut)) bool canBeCut;

  __declspec(property(get = get_radius)) float_t radius;

  /// @brief Field wasCutBySaberEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_wasCutBySaberEvent, put = __cordl_internal_set_wasCutBySaberEvent)) ::GlobalNamespace::__CuttableBySaber__WasCutBySaberDelegate* wasCutBySaberEvent;

  /// @brief Method CallWasCutBySaberEvent, addr 0x3b83cc0, size 0x2c, virtual false, abstract: false, final false
  inline void CallWasCutBySaberEvent(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec);

  /// @brief Method Cut, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Cut(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec);

  static inline ::GlobalNamespace::CuttableBySaber* New_ctor();

  constexpr ::GlobalNamespace::__CuttableBySaber__WasCutBySaberDelegate*& __cordl_internal_get_wasCutBySaberEvent();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__CuttableBySaber__WasCutBySaberDelegate*> const& __cordl_internal_get_wasCutBySaberEvent() const;

  constexpr void __cordl_internal_set_wasCutBySaberEvent(::GlobalNamespace::__CuttableBySaber__WasCutBySaberDelegate* value);

  /// @brief Method .ctor, addr 0x3b83d4c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_wasCutBySaberEvent, addr 0x3b83d54, size 0x9c, virtual false, abstract: false, final false
  inline void add_wasCutBySaberEvent(::GlobalNamespace::__CuttableBySaber__WasCutBySaberDelegate* value);

  /// @brief Method get_canBeCut, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_canBeCut();

  /// @brief Method get_radius, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_radius();

  /// @brief Method remove_wasCutBySaberEvent, addr 0x3b83df0, size 0x9c, virtual false, abstract: false, final false
  inline void remove_wasCutBySaberEvent(::GlobalNamespace::__CuttableBySaber__WasCutBySaberDelegate* value);

  /// @brief Method set_canBeCut, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
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

  /// @brief Field wasCutBySaberEvent, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__CuttableBySaber__WasCutBySaberDelegate* ___wasCutBySaberEvent;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4634 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CuttableBySaber, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CuttableBySaber, ___wasCutBySaberEvent) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CuttableBySaber);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CuttableBySaber*, "", "CuttableBySaber");
NEED_NO_BOX(::GlobalNamespace::__CuttableBySaber__WasCutBySaberDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CuttableBySaber__WasCutBySaberDelegate*, "", "CuttableBySaber/WasCutBySaberDelegate");
