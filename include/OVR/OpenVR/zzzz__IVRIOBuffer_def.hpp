#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IVRIOBuffer)
namespace OVR::OpenVR {
struct EIOBufferError;
}
namespace OVR::OpenVR {
struct EIOBufferMode;
}
namespace OVR::OpenVR {
class __IVRIOBuffer___Close;
}
namespace OVR::OpenVR {
class __IVRIOBuffer___Open;
}
namespace OVR::OpenVR {
class __IVRIOBuffer___PropertyContainer;
}
namespace OVR::OpenVR {
class __IVRIOBuffer___Read;
}
namespace OVR::OpenVR {
class __IVRIOBuffer___Write;
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
class __IVRIOBuffer___Close;
}
namespace OVR::OpenVR {
class __IVRIOBuffer___Open;
}
namespace OVR::OpenVR {
class __IVRIOBuffer___PropertyContainer;
}
namespace OVR::OpenVR {
class __IVRIOBuffer___Read;
}
namespace OVR::OpenVR {
class __IVRIOBuffer___Write;
}
namespace OVR::OpenVR {
struct IVRIOBuffer;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::__IVRIOBuffer___Close);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRIOBuffer___Open);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRIOBuffer___PropertyContainer);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRIOBuffer___Read);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRIOBuffer___Write);
MARK_VAL_T(::OVR::OpenVR::IVRIOBuffer);
// Type: ::_Open
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRIOBuffer::_Open*
class CORDL_TYPE __IVRIOBuffer___Open : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bc391c, size 0x108, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchPath, ::OVR::OpenVR::EIOBufferMode mode, uint32_t unElementSize, uint32_t unElements, ByRef<uint64_t> pulBuffer,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bc3a24, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EIOBufferError EndInvoke(ByRef<uint64_t> pulBuffer, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bc3908, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EIOBufferError Invoke(::StringW pchPath, ::OVR::OpenVR::EIOBufferMode mode, uint32_t unElementSize, uint32_t unElements, ByRef<uint64_t> pulBuffer);

  static inline ::OVR::OpenVR::__IVRIOBuffer___Open* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2bc3830, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRIOBuffer___Open();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRIOBuffer___Open", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRIOBuffer___Open(__IVRIOBuffer___Open&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRIOBuffer___Open", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRIOBuffer___Open(__IVRIOBuffer___Open const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRIOBuffer___Open, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_Close
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRIOBuffer::_Close*
class CORDL_TYPE __IVRIOBuffer___Close : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bc3b28, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulBuffer, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bc3bac, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EIOBufferError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bc3b14, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EIOBufferError Invoke(uint64_t ulBuffer);

  static inline ::OVR::OpenVR::__IVRIOBuffer___Close* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2bc3a50, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRIOBuffer___Close();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRIOBuffer___Close", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRIOBuffer___Close(__IVRIOBuffer___Close&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRIOBuffer___Close", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRIOBuffer___Close(__IVRIOBuffer___Close const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRIOBuffer___Close, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_Read
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRIOBuffer::_Read*
class CORDL_TYPE __IVRIOBuffer___Read : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bc3cac, size 0x100, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulBuffer, void* pDst, uint32_t unBytes, ByRef<uint32_t> punRead, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bc3dac, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EIOBufferError EndInvoke(ByRef<uint32_t> punRead, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bc3c98, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EIOBufferError Invoke(uint64_t ulBuffer, void* pDst, uint32_t unBytes, ByRef<uint32_t> punRead);

  static inline ::OVR::OpenVR::__IVRIOBuffer___Read* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2bc3bd4, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRIOBuffer___Read();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRIOBuffer___Read", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRIOBuffer___Read(__IVRIOBuffer___Read&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRIOBuffer___Read", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRIOBuffer___Read(__IVRIOBuffer___Read const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRIOBuffer___Read, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_Write
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRIOBuffer::_Write*
class CORDL_TYPE __IVRIOBuffer___Write : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bc3eb0, size 0xe0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulBuffer, void* pSrc, uint32_t unBytes, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bc3f90, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EIOBufferError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bc3e9c, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EIOBufferError Invoke(uint64_t ulBuffer, void* pSrc, uint32_t unBytes);

  static inline ::OVR::OpenVR::__IVRIOBuffer___Write* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2bc3dd8, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRIOBuffer___Write();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRIOBuffer___Write", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRIOBuffer___Write(__IVRIOBuffer___Write&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRIOBuffer___Write", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRIOBuffer___Write(__IVRIOBuffer___Write const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRIOBuffer___Write, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_PropertyContainer
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRIOBuffer::_PropertyContainer*
class CORDL_TYPE __IVRIOBuffer___PropertyContainer : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bc4090, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulBuffer, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bc4114, size 0x28, virtual true, abstract: false, final false
  inline uint64_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bc407c, size 0x14, virtual true, abstract: false, final false
  inline uint64_t Invoke(uint64_t ulBuffer);

  static inline ::OVR::OpenVR::__IVRIOBuffer___PropertyContainer* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2bc3fb8, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRIOBuffer___PropertyContainer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRIOBuffer___PropertyContainer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRIOBuffer___PropertyContainer(__IVRIOBuffer___PropertyContainer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRIOBuffer___PropertyContainer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRIOBuffer___PropertyContainer(__IVRIOBuffer___PropertyContainer const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRIOBuffer___PropertyContainer, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: OVR.OpenVR::IVRIOBuffer
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// CS Name: ::OVR.OpenVR::IVRIOBuffer
struct CORDL_TYPE IVRIOBuffer {
public:
  // Declarations
  using _Close = ::OVR::OpenVR::__IVRIOBuffer___Close;

  using _Open = ::OVR::OpenVR::__IVRIOBuffer___Open;

  using _PropertyContainer = ::OVR::OpenVR::__IVRIOBuffer___PropertyContainer;

  using _Read = ::OVR::OpenVR::__IVRIOBuffer___Read;

  using _Write = ::OVR::OpenVR::__IVRIOBuffer___Write;

  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRIOBuffer();

  // Ctor Parameters [CppParam { name: "Open", ty: "::OVR::OpenVR::__IVRIOBuffer___Open*", modifiers: "", def_value: None }, CppParam { name: "Close", ty: "::OVR::OpenVR::__IVRIOBuffer___Close*",
  // modifiers: "", def_value: None }, CppParam { name: "Read", ty: "::OVR::OpenVR::__IVRIOBuffer___Read*", modifiers: "", def_value: None }, CppParam { name: "Write", ty:
  // "::OVR::OpenVR::__IVRIOBuffer___Write*", modifiers: "", def_value: None }, CppParam { name: "PropertyContainer", ty: "::OVR::OpenVR::__IVRIOBuffer___PropertyContainer*", modifiers: "", def_value:
  // None }]
  constexpr IVRIOBuffer(::OVR::OpenVR::__IVRIOBuffer___Open* Open, ::OVR::OpenVR::__IVRIOBuffer___Close* Close, ::OVR::OpenVR::__IVRIOBuffer___Read* Read, ::OVR::OpenVR::__IVRIOBuffer___Write* Write,
                        ::OVR::OpenVR::__IVRIOBuffer___PropertyContainer* PropertyContainer) noexcept;

  /// @brief Field Open, offset: 0x0, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRIOBuffer___Open* Open;

  /// @brief Field Close, offset: 0x8, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRIOBuffer___Close* Close;

  /// @brief Field Read, offset: 0x10, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRIOBuffer___Read* Read;

  /// @brief Field Write, offset: 0x18, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRIOBuffer___Write* Write;

  /// @brief Field PropertyContainer, offset: 0x20, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRIOBuffer___PropertyContainer* PropertyContainer;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRIOBuffer, 0x28>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRIOBuffer, Open) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRIOBuffer, Close) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRIOBuffer, Read) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRIOBuffer, Write) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRIOBuffer, PropertyContainer) == 0x20, "Offset mismatch!");

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::__IVRIOBuffer___Close);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRIOBuffer___Close*, "OVR.OpenVR", "IVRIOBuffer/_Close");
NEED_NO_BOX(::OVR::OpenVR::__IVRIOBuffer___Open);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRIOBuffer___Open*, "OVR.OpenVR", "IVRIOBuffer/_Open");
NEED_NO_BOX(::OVR::OpenVR::__IVRIOBuffer___PropertyContainer);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRIOBuffer___PropertyContainer*, "OVR.OpenVR", "IVRIOBuffer/_PropertyContainer");
NEED_NO_BOX(::OVR::OpenVR::__IVRIOBuffer___Read);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRIOBuffer___Read*, "OVR.OpenVR", "IVRIOBuffer/_Read");
NEED_NO_BOX(::OVR::OpenVR::__IVRIOBuffer___Write);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRIOBuffer___Write*, "OVR.OpenVR", "IVRIOBuffer/_Write");
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRIOBuffer, "OVR.OpenVR", "IVRIOBuffer");
