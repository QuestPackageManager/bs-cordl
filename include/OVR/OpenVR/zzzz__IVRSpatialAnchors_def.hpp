#pragma once
// IWYU pragma private; include "OVR/OpenVR/IVRSpatialAnchors.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IVRSpatialAnchors)
namespace OVR::OpenVR {
struct ETrackingUniverseOrigin;
}
namespace OVR::OpenVR {
struct EVRSpatialAnchorError;
}
namespace OVR::OpenVR {
class IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor;
}
namespace OVR::OpenVR {
class IVRSpatialAnchors__CreateSpatialAnchorFromPose;
}
namespace OVR::OpenVR {
class IVRSpatialAnchors__GetSpatialAnchorDescriptor;
}
namespace OVR::OpenVR {
class IVRSpatialAnchors__GetSpatialAnchorPose;
}
namespace OVR::OpenVR {
struct SpatialAnchorPose_t;
}
namespace System::Text {
class StringBuilder;
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
class IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor;
}
namespace OVR::OpenVR {
class IVRSpatialAnchors__CreateSpatialAnchorFromPose;
}
namespace OVR::OpenVR {
class IVRSpatialAnchors__GetSpatialAnchorDescriptor;
}
namespace OVR::OpenVR {
class IVRSpatialAnchors__GetSpatialAnchorPose;
}
namespace OVR::OpenVR {
struct IVRSpatialAnchors;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromPose);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorDescriptor);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorPose);
MARK_VAL_T(::OVR::OpenVR::IVRSpatialAnchors);
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSpatialAnchors/_CreateSpatialAnchorFromDescriptor
class CORDL_TYPE IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x406bf20, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchDescriptor, ::ByRef<uint32_t> pHandleOut, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x406bfb4, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRSpatialAnchorError EndInvoke(::ByRef<uint32_t> pHandleOut, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x406bf0c, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRSpatialAnchorError Invoke(::StringW pchDescriptor, ::ByRef<uint32_t> pHandleOut);

  static inline ::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x406be6c, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor(IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor(IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8865 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSpatialAnchors/_CreateSpatialAnchorFromPose
class CORDL_TYPE IVRSpatialAnchors__CreateSpatialAnchorFromPose : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x406c080, size 0x108, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, ::ByRef<::OVR::OpenVR::SpatialAnchorPose_t> pPose, ::ByRef<uint32_t> pHandleOut,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x406c188, size 0x34, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRSpatialAnchorError EndInvoke(::ByRef<::OVR::OpenVR::SpatialAnchorPose_t> pPose, ::ByRef<uint32_t> pHandleOut, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x406c06c, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRSpatialAnchorError Invoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, ::ByRef<::OVR::OpenVR::SpatialAnchorPose_t> pPose,
                                                     ::ByRef<uint32_t> pHandleOut);

  static inline ::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromPose* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x406bfe0, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSpatialAnchors__CreateSpatialAnchorFromPose();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSpatialAnchors__CreateSpatialAnchorFromPose", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSpatialAnchors__CreateSpatialAnchorFromPose(IVRSpatialAnchors__CreateSpatialAnchorFromPose&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSpatialAnchors__CreateSpatialAnchorFromPose", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSpatialAnchors__CreateSpatialAnchorFromPose(IVRSpatialAnchors__CreateSpatialAnchorFromPose const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8866 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromPose, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSpatialAnchors/_GetSpatialAnchorPose
class CORDL_TYPE IVRSpatialAnchors__GetSpatialAnchorPose : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x406c25c, size 0xec, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unHandle, ::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, ::ByRef<::OVR::OpenVR::SpatialAnchorPose_t> pPoseOut, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x406c348, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRSpatialAnchorError EndInvoke(::ByRef<::OVR::OpenVR::SpatialAnchorPose_t> pPoseOut, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x406c248, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRSpatialAnchorError Invoke(uint32_t unHandle, ::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, ::ByRef<::OVR::OpenVR::SpatialAnchorPose_t> pPoseOut);

  static inline ::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorPose* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x406c1bc, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSpatialAnchors__GetSpatialAnchorPose();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSpatialAnchors__GetSpatialAnchorPose", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSpatialAnchors__GetSpatialAnchorPose(IVRSpatialAnchors__GetSpatialAnchorPose&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSpatialAnchors__GetSpatialAnchorPose", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSpatialAnchors__GetSpatialAnchorPose(IVRSpatialAnchors__GetSpatialAnchorPose const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8867 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorPose, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSpatialAnchors/_GetSpatialAnchorDescriptor
class CORDL_TYPE IVRSpatialAnchors__GetSpatialAnchorDescriptor : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x406c414, size 0xac, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unHandle, ::System::Text::StringBuilder* pchDescriptorOut, ::ByRef<uint32_t> punDescriptorBufferLenInOut, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x406c4c0, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRSpatialAnchorError EndInvoke(::ByRef<uint32_t> punDescriptorBufferLenInOut, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x406c400, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRSpatialAnchorError Invoke(uint32_t unHandle, ::System::Text::StringBuilder* pchDescriptorOut, ::ByRef<uint32_t> punDescriptorBufferLenInOut);

  static inline ::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorDescriptor* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x406c374, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSpatialAnchors__GetSpatialAnchorDescriptor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSpatialAnchors__GetSpatialAnchorDescriptor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSpatialAnchors__GetSpatialAnchorDescriptor(IVRSpatialAnchors__GetSpatialAnchorDescriptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSpatialAnchors__GetSpatialAnchorDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSpatialAnchors__GetSpatialAnchorDescriptor(IVRSpatialAnchors__GetSpatialAnchorDescriptor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8868 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorDescriptor, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.IVRSpatialAnchors
struct CORDL_TYPE IVRSpatialAnchors {
public:
  // Declarations
  using _CreateSpatialAnchorFromDescriptor = ::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor;

  using _CreateSpatialAnchorFromPose = ::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromPose;

  using _GetSpatialAnchorDescriptor = ::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorDescriptor;

  using _GetSpatialAnchorPose = ::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorPose;

  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSpatialAnchors();

  // Ctor Parameters [CppParam { name: "CreateSpatialAnchorFromDescriptor", ty: "::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor*", modifiers: "", def_value: None }, CppParam {
  // name: "CreateSpatialAnchorFromPose", ty: "::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromPose*", modifiers: "", def_value: None }, CppParam { name: "GetSpatialAnchorPose", ty:
  // "::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorPose*", modifiers: "", def_value: None }, CppParam { name: "GetSpatialAnchorDescriptor", ty:
  // "::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorDescriptor*", modifiers: "", def_value: None }]
  constexpr IVRSpatialAnchors(::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor* CreateSpatialAnchorFromDescriptor,
                              ::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromPose* CreateSpatialAnchorFromPose, ::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorPose* GetSpatialAnchorPose,
                              ::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorDescriptor* GetSpatialAnchorDescriptor) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8869 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field CreateSpatialAnchorFromDescriptor, offset: 0x0, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor* CreateSpatialAnchorFromDescriptor;

  /// @brief Field CreateSpatialAnchorFromPose, offset: 0x8, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromPose* CreateSpatialAnchorFromPose;

  /// @brief Field GetSpatialAnchorPose, offset: 0x10, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorPose* GetSpatialAnchorPose;

  /// @brief Field GetSpatialAnchorDescriptor, offset: 0x18, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorDescriptor* GetSpatialAnchorDescriptor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::IVRSpatialAnchors, CreateSpatialAnchorFromDescriptor) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSpatialAnchors, CreateSpatialAnchorFromPose) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSpatialAnchors, GetSpatialAnchorPose) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSpatialAnchors, GetSpatialAnchorDescriptor) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSpatialAnchors, 0x20>, "Size mismatch!");

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor*, "OVR.OpenVR", "IVRSpatialAnchors/_CreateSpatialAnchorFromDescriptor");
NEED_NO_BOX(::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromPose);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromPose*, "OVR.OpenVR", "IVRSpatialAnchors/_CreateSpatialAnchorFromPose");
NEED_NO_BOX(::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorDescriptor*, "OVR.OpenVR", "IVRSpatialAnchors/_GetSpatialAnchorDescriptor");
NEED_NO_BOX(::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorPose);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorPose*, "OVR.OpenVR", "IVRSpatialAnchors/_GetSpatialAnchorPose");
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSpatialAnchors, "OVR.OpenVR", "IVRSpatialAnchors");
