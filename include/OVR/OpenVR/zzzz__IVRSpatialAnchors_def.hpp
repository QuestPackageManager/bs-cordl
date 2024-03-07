#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
struct SpatialAnchorPose_t;
}
namespace OVR::OpenVR {
class __IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor;
}
namespace OVR::OpenVR {
class __IVRSpatialAnchors___CreateSpatialAnchorFromPose;
}
namespace OVR::OpenVR {
class __IVRSpatialAnchors___GetSpatialAnchorDescriptor;
}
namespace OVR::OpenVR {
class __IVRSpatialAnchors___GetSpatialAnchorPose;
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
class Object;
}
// Forward declare root types
namespace OVR::OpenVR {
class __IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor;
}
namespace OVR::OpenVR {
class __IVRSpatialAnchors___CreateSpatialAnchorFromPose;
}
namespace OVR::OpenVR {
class __IVRSpatialAnchors___GetSpatialAnchorDescriptor;
}
namespace OVR::OpenVR {
class __IVRSpatialAnchors___GetSpatialAnchorPose;
}
namespace OVR::OpenVR {
struct IVRSpatialAnchors;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose);
MARK_VAL_T(::OVR::OpenVR::IVRSpatialAnchors);
// Type: ::_CreateSpatialAnchorFromDescriptor
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSpatialAnchors::_CreateSpatialAnchorFromDescriptor*
class CORDL_TYPE __IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2944398, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchDescriptor, ByRef<uint32_t> pHandleOut, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x294442c, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRSpatialAnchorError EndInvoke(ByRef<uint32_t> pHandleOut, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2944384, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRSpatialAnchorError Invoke(::StringW pchDescriptor, ByRef<uint32_t> pHandleOut);

  static inline ::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x29442ac, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor(__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor(__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_CreateSpatialAnchorFromPose
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSpatialAnchors::_CreateSpatialAnchorFromPose*
class CORDL_TYPE __IVRSpatialAnchors___CreateSpatialAnchorFromPose : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2944530, size 0x100, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, ByRef<::OVR::OpenVR::SpatialAnchorPose_t> pPose, ByRef<uint32_t> pHandleOut,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2944630, size 0x34, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRSpatialAnchorError EndInvoke(ByRef<::OVR::OpenVR::SpatialAnchorPose_t> pPose, ByRef<uint32_t> pHandleOut, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x294451c, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRSpatialAnchorError Invoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, ByRef<::OVR::OpenVR::SpatialAnchorPose_t> pPose,
                                                     ByRef<uint32_t> pHandleOut);

  static inline ::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2944458, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRSpatialAnchors___CreateSpatialAnchorFromPose();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRSpatialAnchors___CreateSpatialAnchorFromPose", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRSpatialAnchors___CreateSpatialAnchorFromPose(__IVRSpatialAnchors___CreateSpatialAnchorFromPose&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRSpatialAnchors___CreateSpatialAnchorFromPose", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRSpatialAnchors___CreateSpatialAnchorFromPose(__IVRSpatialAnchors___CreateSpatialAnchorFromPose const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetSpatialAnchorPose
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSpatialAnchors::_GetSpatialAnchorPose*
class CORDL_TYPE __IVRSpatialAnchors___GetSpatialAnchorPose : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x294473c, size 0xe8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unHandle, ::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, ByRef<::OVR::OpenVR::SpatialAnchorPose_t> pPoseOut, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2944824, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRSpatialAnchorError EndInvoke(ByRef<::OVR::OpenVR::SpatialAnchorPose_t> pPoseOut, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2944728, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRSpatialAnchorError Invoke(uint32_t unHandle, ::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, ByRef<::OVR::OpenVR::SpatialAnchorPose_t> pPoseOut);

  static inline ::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2944664, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRSpatialAnchors___GetSpatialAnchorPose();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRSpatialAnchors___GetSpatialAnchorPose", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRSpatialAnchors___GetSpatialAnchorPose(__IVRSpatialAnchors___GetSpatialAnchorPose&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRSpatialAnchors___GetSpatialAnchorPose", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRSpatialAnchors___GetSpatialAnchorPose(__IVRSpatialAnchors___GetSpatialAnchorPose const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetSpatialAnchorDescriptor
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSpatialAnchors::_GetSpatialAnchorDescriptor*
class CORDL_TYPE __IVRSpatialAnchors___GetSpatialAnchorDescriptor : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2944928, size 0xa8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unHandle, ::System::Text::StringBuilder* pchDescriptorOut, ByRef<uint32_t> punDescriptorBufferLenInOut, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x29449d0, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRSpatialAnchorError EndInvoke(ByRef<uint32_t> punDescriptorBufferLenInOut, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2944914, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRSpatialAnchorError Invoke(uint32_t unHandle, ::System::Text::StringBuilder* pchDescriptorOut, ByRef<uint32_t> punDescriptorBufferLenInOut);

  static inline ::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2944850, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRSpatialAnchors___GetSpatialAnchorDescriptor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRSpatialAnchors___GetSpatialAnchorDescriptor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRSpatialAnchors___GetSpatialAnchorDescriptor(__IVRSpatialAnchors___GetSpatialAnchorDescriptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRSpatialAnchors___GetSpatialAnchorDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRSpatialAnchors___GetSpatialAnchorDescriptor(__IVRSpatialAnchors___GetSpatialAnchorDescriptor const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: OVR.OpenVR::IVRSpatialAnchors
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// CS Name: ::OVR.OpenVR::IVRSpatialAnchors
struct CORDL_TYPE IVRSpatialAnchors {
public:
  // Declarations
  using _CreateSpatialAnchorFromDescriptor = ::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor;

  using _CreateSpatialAnchorFromPose = ::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose;

  using _GetSpatialAnchorDescriptor = ::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor;

  using _GetSpatialAnchorPose = ::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose;

  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSpatialAnchors();

  // Ctor Parameters [CppParam { name: "CreateSpatialAnchorFromDescriptor", ty: "::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor*", modifiers: "", def_value: None }, CppParam {
  // name: "CreateSpatialAnchorFromPose", ty: "::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose*", modifiers: "", def_value: None }, CppParam { name: "GetSpatialAnchorPose", ty:
  // "::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose*", modifiers: "", def_value: None }, CppParam { name: "GetSpatialAnchorDescriptor", ty:
  // "::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor*", modifiers: "", def_value: None }]
  constexpr IVRSpatialAnchors(::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor* CreateSpatialAnchorFromDescriptor,
                              ::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose* CreateSpatialAnchorFromPose,
                              ::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose* GetSpatialAnchorPose,
                              ::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor* GetSpatialAnchorDescriptor) noexcept;

  /// @brief Field CreateSpatialAnchorFromDescriptor, offset: 0x0, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor* CreateSpatialAnchorFromDescriptor;

  /// @brief Field CreateSpatialAnchorFromPose, offset: 0x8, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose* CreateSpatialAnchorFromPose;

  /// @brief Field GetSpatialAnchorPose, offset: 0x10, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose* GetSpatialAnchorPose;

  /// @brief Field GetSpatialAnchorDescriptor, offset: 0x18, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor* GetSpatialAnchorDescriptor;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSpatialAnchors, 0x20>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSpatialAnchors, CreateSpatialAnchorFromDescriptor) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSpatialAnchors, CreateSpatialAnchorFromPose) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSpatialAnchors, GetSpatialAnchorPose) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSpatialAnchors, GetSpatialAnchorDescriptor) == 0x18, "Offset mismatch!");

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor*, "OVR.OpenVR", "IVRSpatialAnchors/_CreateSpatialAnchorFromDescriptor");
NEED_NO_BOX(::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose*, "OVR.OpenVR", "IVRSpatialAnchors/_CreateSpatialAnchorFromPose");
NEED_NO_BOX(::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor*, "OVR.OpenVR", "IVRSpatialAnchors/_GetSpatialAnchorDescriptor");
NEED_NO_BOX(::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose*, "OVR.OpenVR", "IVRSpatialAnchors/_GetSpatialAnchorPose");
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSpatialAnchors, "OVR.OpenVR", "IVRSpatialAnchors");
