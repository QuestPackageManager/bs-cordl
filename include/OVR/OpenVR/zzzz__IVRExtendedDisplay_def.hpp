#pragma once
// IWYU pragma private; include "OVR/OpenVR/IVRExtendedDisplay.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IVRExtendedDisplay)
namespace OVR::OpenVR {
struct EVREye;
}
namespace OVR::OpenVR {
class IVRExtendedDisplay__GetDXGIOutputInfo;
}
namespace OVR::OpenVR {
class IVRExtendedDisplay__GetEyeOutputViewport;
}
namespace OVR::OpenVR {
class IVRExtendedDisplay__GetWindowBounds;
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
// Forward declare root types
namespace OVR::OpenVR {
class IVRExtendedDisplay__GetDXGIOutputInfo;
}
namespace OVR::OpenVR {
class IVRExtendedDisplay__GetEyeOutputViewport;
}
namespace OVR::OpenVR {
class IVRExtendedDisplay__GetWindowBounds;
}
namespace OVR::OpenVR {
struct IVRExtendedDisplay;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo);
MARK_REF_PTR_T(::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport);
MARK_REF_PTR_T(::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds);
MARK_VAL_T(::OVR::OpenVR::IVRExtendedDisplay);
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRExtendedDisplay/_GetWindowBounds
class CORDL_TYPE IVRExtendedDisplay__GetWindowBounds : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4054190, size 0xf8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ByRef<int32_t> pnX, ::ByRef<int32_t> pnY, ::ByRef<uint32_t> pnWidth, ::ByRef<uint32_t> pnHeight, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4054288, size 0x28, virtual true, abstract: false, final false
  inline void EndInvoke(::ByRef<int32_t> pnX, ::ByRef<int32_t> pnY, ::ByRef<uint32_t> pnWidth, ::ByRef<uint32_t> pnHeight, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405417c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::ByRef<int32_t> pnX, ::ByRef<int32_t> pnY, ::ByRef<uint32_t> pnWidth, ::ByRef<uint32_t> pnHeight);

  static inline ::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x40540dc, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRExtendedDisplay__GetWindowBounds();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRExtendedDisplay__GetWindowBounds", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRExtendedDisplay__GetWindowBounds(IVRExtendedDisplay__GetWindowBounds&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRExtendedDisplay__GetWindowBounds", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRExtendedDisplay__GetWindowBounds(IVRExtendedDisplay__GetWindowBounds const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8583 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRExtendedDisplay/_GetEyeOutputViewport
class CORDL_TYPE IVRExtendedDisplay__GetEyeOutputViewport : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4054350, size 0x118, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EVREye eEye, ::ByRef<uint32_t> pnX, ::ByRef<uint32_t> pnY, ::ByRef<uint32_t> pnWidth, ::ByRef<uint32_t> pnHeight,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4054468, size 0x28, virtual true, abstract: false, final false
  inline void EndInvoke(::ByRef<uint32_t> pnX, ::ByRef<uint32_t> pnY, ::ByRef<uint32_t> pnWidth, ::ByRef<uint32_t> pnHeight, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405433c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::OVR::OpenVR::EVREye eEye, ::ByRef<uint32_t> pnX, ::ByRef<uint32_t> pnY, ::ByRef<uint32_t> pnWidth, ::ByRef<uint32_t> pnHeight);

  static inline ::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x40542b0, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRExtendedDisplay__GetEyeOutputViewport();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRExtendedDisplay__GetEyeOutputViewport", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRExtendedDisplay__GetEyeOutputViewport(IVRExtendedDisplay__GetEyeOutputViewport&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRExtendedDisplay__GetEyeOutputViewport", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRExtendedDisplay__GetEyeOutputViewport(IVRExtendedDisplay__GetEyeOutputViewport const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8584 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRExtendedDisplay/_GetDXGIOutputInfo
class CORDL_TYPE IVRExtendedDisplay__GetDXGIOutputInfo : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4054544, size 0xa4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ByRef<int32_t> pnAdapterIndex, ::ByRef<int32_t> pnAdapterOutputIndex, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x40545e8, size 0x24, virtual true, abstract: false, final false
  inline void EndInvoke(::ByRef<int32_t> pnAdapterIndex, ::ByRef<int32_t> pnAdapterOutputIndex, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4054530, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::ByRef<int32_t> pnAdapterIndex, ::ByRef<int32_t> pnAdapterOutputIndex);

  static inline ::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4054490, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRExtendedDisplay__GetDXGIOutputInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRExtendedDisplay__GetDXGIOutputInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRExtendedDisplay__GetDXGIOutputInfo(IVRExtendedDisplay__GetDXGIOutputInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRExtendedDisplay__GetDXGIOutputInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRExtendedDisplay__GetDXGIOutputInfo(IVRExtendedDisplay__GetDXGIOutputInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8585 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.IVRExtendedDisplay
struct CORDL_TYPE IVRExtendedDisplay {
public:
  // Declarations
  using _GetDXGIOutputInfo = ::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo;

  using _GetEyeOutputViewport = ::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport;

  using _GetWindowBounds = ::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds;

  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRExtendedDisplay();

  // Ctor Parameters [CppParam { name: "GetWindowBounds", ty: "::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds*", modifiers: "", def_value: None }, CppParam { name: "GetEyeOutputViewport", ty:
  // "::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport*", modifiers: "", def_value: None }, CppParam { name: "GetDXGIOutputInfo", ty: "::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo*",
  // modifiers: "", def_value: None }]
  constexpr IVRExtendedDisplay(::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds* GetWindowBounds, ::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport* GetEyeOutputViewport,
                               ::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo* GetDXGIOutputInfo) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8586 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field GetWindowBounds, offset: 0x0, size: 0x8, def value: None
  ::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds* GetWindowBounds;

  /// @brief Field GetEyeOutputViewport, offset: 0x8, size: 0x8, def value: None
  ::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport* GetEyeOutputViewport;

  /// @brief Field GetDXGIOutputInfo, offset: 0x10, size: 0x8, def value: None
  ::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo* GetDXGIOutputInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::IVRExtendedDisplay, GetWindowBounds) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRExtendedDisplay, GetEyeOutputViewport) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRExtendedDisplay, GetDXGIOutputInfo) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRExtendedDisplay, 0x18>, "Size mismatch!");

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo*, "OVR.OpenVR", "IVRExtendedDisplay/_GetDXGIOutputInfo");
NEED_NO_BOX(::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport*, "OVR.OpenVR", "IVRExtendedDisplay/_GetEyeOutputViewport");
NEED_NO_BOX(::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds*, "OVR.OpenVR", "IVRExtendedDisplay/_GetWindowBounds");
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRExtendedDisplay, "OVR.OpenVR", "IVRExtendedDisplay");
