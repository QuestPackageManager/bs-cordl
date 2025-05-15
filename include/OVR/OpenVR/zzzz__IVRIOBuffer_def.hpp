#pragma once
// IWYU pragma private; include "OVR/OpenVR/IVRIOBuffer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
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
class IVRIOBuffer__Close;
}
namespace OVR::OpenVR {
class IVRIOBuffer__Open;
}
namespace OVR::OpenVR {
class IVRIOBuffer__PropertyContainer;
}
namespace OVR::OpenVR {
class IVRIOBuffer__Read;
}
namespace OVR::OpenVR {
class IVRIOBuffer__Write;
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
class IVRIOBuffer__Close;
}
namespace OVR::OpenVR {
class IVRIOBuffer__Open;
}
namespace OVR::OpenVR {
class IVRIOBuffer__PropertyContainer;
}
namespace OVR::OpenVR {
class IVRIOBuffer__Read;
}
namespace OVR::OpenVR {
class IVRIOBuffer__Write;
}
namespace OVR::OpenVR {
struct IVRIOBuffer;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::IVRIOBuffer__Close);
MARK_REF_PTR_T(::OVR::OpenVR::IVRIOBuffer__Open);
MARK_REF_PTR_T(::OVR::OpenVR::IVRIOBuffer__PropertyContainer);
MARK_REF_PTR_T(::OVR::OpenVR::IVRIOBuffer__Read);
MARK_REF_PTR_T(::OVR::OpenVR::IVRIOBuffer__Write);
MARK_VAL_T(::OVR::OpenVR::IVRIOBuffer);
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRIOBuffer/_Open
class CORDL_TYPE IVRIOBuffer__Open : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4070688, size 0x114, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchPath, ::OVR::OpenVR::EIOBufferMode mode, uint32_t unElementSize, uint32_t unElements, ::ByRef<uint64_t> pulBuffer,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x407079c, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EIOBufferError EndInvoke(::ByRef<uint64_t> pulBuffer, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4070674, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EIOBufferError Invoke(::StringW pchPath, ::OVR::OpenVR::EIOBufferMode mode, uint32_t unElementSize, uint32_t unElements, ::ByRef<uint64_t> pulBuffer);

  static inline ::OVR::OpenVR::IVRIOBuffer__Open* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x40705d4, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRIOBuffer__Open();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRIOBuffer__Open", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRIOBuffer__Open(IVRIOBuffer__Open&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRIOBuffer__Open", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRIOBuffer__Open(IVRIOBuffer__Open const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8859 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRIOBuffer__Open, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRIOBuffer/_Close
class CORDL_TYPE IVRIOBuffer__Close : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4070868, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulBuffer, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x40708ec, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EIOBufferError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4070854, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EIOBufferError Invoke(uint64_t ulBuffer);

  static inline ::OVR::OpenVR::IVRIOBuffer__Close* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x40707c8, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRIOBuffer__Close();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRIOBuffer__Close", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRIOBuffer__Close(IVRIOBuffer__Close&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRIOBuffer__Close", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRIOBuffer__Close(IVRIOBuffer__Close const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8860 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRIOBuffer__Close, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRIOBuffer/_Read
class CORDL_TYPE IVRIOBuffer__Read : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x40709b4, size 0x108, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulBuffer, ::System::IntPtr pDst, uint32_t unBytes, ::ByRef<uint32_t> punRead, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4070abc, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EIOBufferError EndInvoke(::ByRef<uint32_t> punRead, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x40709a0, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EIOBufferError Invoke(uint64_t ulBuffer, ::System::IntPtr pDst, uint32_t unBytes, ::ByRef<uint32_t> punRead);

  static inline ::OVR::OpenVR::IVRIOBuffer__Read* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4070914, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRIOBuffer__Read();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRIOBuffer__Read", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRIOBuffer__Read(IVRIOBuffer__Read&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRIOBuffer__Read", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRIOBuffer__Read(IVRIOBuffer__Read const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8861 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRIOBuffer__Read, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRIOBuffer/_Write
class CORDL_TYPE IVRIOBuffer__Write : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4070b88, size 0xe4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulBuffer, ::System::IntPtr pSrc, uint32_t unBytes, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4070c6c, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EIOBufferError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4070b74, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EIOBufferError Invoke(uint64_t ulBuffer, ::System::IntPtr pSrc, uint32_t unBytes);

  static inline ::OVR::OpenVR::IVRIOBuffer__Write* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4070ae8, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRIOBuffer__Write();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRIOBuffer__Write", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRIOBuffer__Write(IVRIOBuffer__Write&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRIOBuffer__Write", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRIOBuffer__Write(IVRIOBuffer__Write const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8862 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRIOBuffer__Write, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRIOBuffer/_PropertyContainer
class CORDL_TYPE IVRIOBuffer__PropertyContainer : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4070d34, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulBuffer, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4070db8, size 0x28, virtual true, abstract: false, final false
  inline uint64_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4070d20, size 0x14, virtual true, abstract: false, final false
  inline uint64_t Invoke(uint64_t ulBuffer);

  static inline ::OVR::OpenVR::IVRIOBuffer__PropertyContainer* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4070c94, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRIOBuffer__PropertyContainer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRIOBuffer__PropertyContainer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRIOBuffer__PropertyContainer(IVRIOBuffer__PropertyContainer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRIOBuffer__PropertyContainer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRIOBuffer__PropertyContainer(IVRIOBuffer__PropertyContainer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8863 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRIOBuffer__PropertyContainer, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.IVRIOBuffer
struct CORDL_TYPE IVRIOBuffer {
public:
  // Declarations
  using _Close = ::OVR::OpenVR::IVRIOBuffer__Close;

  using _Open = ::OVR::OpenVR::IVRIOBuffer__Open;

  using _PropertyContainer = ::OVR::OpenVR::IVRIOBuffer__PropertyContainer;

  using _Read = ::OVR::OpenVR::IVRIOBuffer__Read;

  using _Write = ::OVR::OpenVR::IVRIOBuffer__Write;

  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRIOBuffer();

  // Ctor Parameters [CppParam { name: "Open", ty: "::OVR::OpenVR::IVRIOBuffer__Open*", modifiers: "", def_value: None }, CppParam { name: "Close", ty: "::OVR::OpenVR::IVRIOBuffer__Close*", modifiers:
  // "", def_value: None }, CppParam { name: "Read", ty: "::OVR::OpenVR::IVRIOBuffer__Read*", modifiers: "", def_value: None }, CppParam { name: "Write", ty: "::OVR::OpenVR::IVRIOBuffer__Write*",
  // modifiers: "", def_value: None }, CppParam { name: "PropertyContainer", ty: "::OVR::OpenVR::IVRIOBuffer__PropertyContainer*", modifiers: "", def_value: None }]
  constexpr IVRIOBuffer(::OVR::OpenVR::IVRIOBuffer__Open* Open, ::OVR::OpenVR::IVRIOBuffer__Close* Close, ::OVR::OpenVR::IVRIOBuffer__Read* Read, ::OVR::OpenVR::IVRIOBuffer__Write* Write,
                        ::OVR::OpenVR::IVRIOBuffer__PropertyContainer* PropertyContainer) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8864 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field Open, offset: 0x0, size: 0x8, def value: None
  ::OVR::OpenVR::IVRIOBuffer__Open* Open;

  /// @brief Field Close, offset: 0x8, size: 0x8, def value: None
  ::OVR::OpenVR::IVRIOBuffer__Close* Close;

  /// @brief Field Read, offset: 0x10, size: 0x8, def value: None
  ::OVR::OpenVR::IVRIOBuffer__Read* Read;

  /// @brief Field Write, offset: 0x18, size: 0x8, def value: None
  ::OVR::OpenVR::IVRIOBuffer__Write* Write;

  /// @brief Field PropertyContainer, offset: 0x20, size: 0x8, def value: None
  ::OVR::OpenVR::IVRIOBuffer__PropertyContainer* PropertyContainer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::IVRIOBuffer, Open) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRIOBuffer, Close) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRIOBuffer, Read) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRIOBuffer, Write) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRIOBuffer, PropertyContainer) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRIOBuffer, 0x28>, "Size mismatch!");

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::IVRIOBuffer__Close);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRIOBuffer__Close*, "OVR.OpenVR", "IVRIOBuffer/_Close");
NEED_NO_BOX(::OVR::OpenVR::IVRIOBuffer__Open);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRIOBuffer__Open*, "OVR.OpenVR", "IVRIOBuffer/_Open");
NEED_NO_BOX(::OVR::OpenVR::IVRIOBuffer__PropertyContainer);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRIOBuffer__PropertyContainer*, "OVR.OpenVR", "IVRIOBuffer/_PropertyContainer");
NEED_NO_BOX(::OVR::OpenVR::IVRIOBuffer__Read);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRIOBuffer__Read*, "OVR.OpenVR", "IVRIOBuffer/_Read");
NEED_NO_BOX(::OVR::OpenVR::IVRIOBuffer__Write);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRIOBuffer__Write*, "OVR.OpenVR", "IVRIOBuffer/_Write");
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRIOBuffer, "OVR.OpenVR", "IVRIOBuffer");
