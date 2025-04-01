#pragma once
// IWYU pragma private; include "GlobalNamespace/Interop.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Interop)
namespace GlobalNamespace {
struct Interop_ErrorInfo;
}
namespace GlobalNamespace {
struct Interop_Error;
}
namespace GlobalNamespace {
class Interop_Sys;
}
namespace GlobalNamespace {
struct Sys_Interop_DirectoryEntry;
}
namespace GlobalNamespace {
struct Sys_Interop_FileStatusFlags;
}
namespace GlobalNamespace {
struct Sys_Interop_FileStatus;
}
namespace GlobalNamespace {
struct Sys_Interop_NodeType;
}
namespace GlobalNamespace {
struct Sys_Interop_Permissions;
}
namespace Microsoft::Win32::SafeHandles {
class SafeFileHandle;
}
namespace System {
class Exception;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
struct IntPtr;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
template <typename T> struct Span_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct Interop_Error;
}
namespace GlobalNamespace {
struct Sys_Interop_FileStatusFlags;
}
namespace GlobalNamespace {
struct Sys_Interop_NodeType;
}
namespace GlobalNamespace {
struct Sys_Interop_Permissions;
}
namespace GlobalNamespace {
class Interop;
}
namespace GlobalNamespace {
class Interop_Sys;
}
namespace GlobalNamespace {
struct Interop_ErrorInfo;
}
namespace GlobalNamespace {
struct Sys_Interop_DirectoryEntry;
}
namespace GlobalNamespace {
struct Sys_Interop_FileStatus;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Interop_Error);
MARK_VAL_T(::GlobalNamespace::Sys_Interop_FileStatusFlags);
MARK_VAL_T(::GlobalNamespace::Sys_Interop_NodeType);
MARK_VAL_T(::GlobalNamespace::Sys_Interop_Permissions);
MARK_REF_PTR_T(::GlobalNamespace::Interop);
MARK_REF_PTR_T(::GlobalNamespace::Interop_Sys);
MARK_VAL_T(::GlobalNamespace::Interop_ErrorInfo);
MARK_VAL_T(::GlobalNamespace::Sys_Interop_DirectoryEntry);
MARK_VAL_T(::GlobalNamespace::Sys_Interop_FileStatus);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: Interop/Error
struct CORDL_TYPE Interop_Error {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Interop_Error_Unwrapped
  enum struct __Interop_Error_Unwrapped : int32_t {
    __E_SUCCESS = static_cast<int32_t>(0x0),
    __E_E2BIG = static_cast<int32_t>(0x10001),
    __E_EACCES = static_cast<int32_t>(0x10002),
    __E_EADDRINUSE = static_cast<int32_t>(0x10003),
    __E_EADDRNOTAVAIL = static_cast<int32_t>(0x10004),
    __E_EAFNOSUPPORT = static_cast<int32_t>(0x10005),
    __E_EAGAIN = static_cast<int32_t>(0x10006),
    __E_EALREADY = static_cast<int32_t>(0x10007),
    __E_EBADF = static_cast<int32_t>(0x10008),
    __E_EBADMSG = static_cast<int32_t>(0x10009),
    __E_EBUSY = static_cast<int32_t>(0x1000a),
    __E_ECANCELED = static_cast<int32_t>(0x1000b),
    __E_ECHILD = static_cast<int32_t>(0x1000c),
    __E_ECONNABORTED = static_cast<int32_t>(0x1000d),
    __E_ECONNREFUSED = static_cast<int32_t>(0x1000e),
    __E_ECONNRESET = static_cast<int32_t>(0x1000f),
    __E_EDEADLK = static_cast<int32_t>(0x10010),
    __E_EDESTADDRREQ = static_cast<int32_t>(0x10011),
    __E_EDOM = static_cast<int32_t>(0x10012),
    __E_EDQUOT = static_cast<int32_t>(0x10013),
    __E_EEXIST = static_cast<int32_t>(0x10014),
    __E_EFAULT = static_cast<int32_t>(0x10015),
    __E_EFBIG = static_cast<int32_t>(0x10016),
    __E_EHOSTUNREACH = static_cast<int32_t>(0x10017),
    __E_EIDRM = static_cast<int32_t>(0x10018),
    __E_EILSEQ = static_cast<int32_t>(0x10019),
    __E_EINPROGRESS = static_cast<int32_t>(0x1001a),
    __E_EINTR = static_cast<int32_t>(0x1001b),
    __E_EINVAL = static_cast<int32_t>(0x1001c),
    __E_EIO = static_cast<int32_t>(0x1001d),
    __E_EISCONN = static_cast<int32_t>(0x1001e),
    __E_EISDIR = static_cast<int32_t>(0x1001f),
    __E_ELOOP = static_cast<int32_t>(0x10020),
    __E_EMFILE = static_cast<int32_t>(0x10021),
    __E_EMLINK = static_cast<int32_t>(0x10022),
    __E_EMSGSIZE = static_cast<int32_t>(0x10023),
    __E_EMULTIHOP = static_cast<int32_t>(0x10024),
    __E_ENAMETOOLONG = static_cast<int32_t>(0x10025),
    __E_ENETDOWN = static_cast<int32_t>(0x10026),
    __E_ENETRESET = static_cast<int32_t>(0x10027),
    __E_ENETUNREACH = static_cast<int32_t>(0x10028),
    __E_ENFILE = static_cast<int32_t>(0x10029),
    __E_ENOBUFS = static_cast<int32_t>(0x1002a),
    __E_ENODEV = static_cast<int32_t>(0x1002c),
    __E_ENOENT = static_cast<int32_t>(0x1002d),
    __E_ENOEXEC = static_cast<int32_t>(0x1002e),
    __E_ENOLCK = static_cast<int32_t>(0x1002f),
    __E_ENOLINK = static_cast<int32_t>(0x10030),
    __E_ENOMEM = static_cast<int32_t>(0x10031),
    __E_ENOMSG = static_cast<int32_t>(0x10032),
    __E_ENOPROTOOPT = static_cast<int32_t>(0x10033),
    __E_ENOSPC = static_cast<int32_t>(0x10034),
    __E_ENOSYS = static_cast<int32_t>(0x10037),
    __E_ENOTCONN = static_cast<int32_t>(0x10038),
    __E_ENOTDIR = static_cast<int32_t>(0x10039),
    __E_ENOTEMPTY = static_cast<int32_t>(0x1003a),
    __E_ENOTSOCK = static_cast<int32_t>(0x1003c),
    __E_ENOTSUP = static_cast<int32_t>(0x1003d),
    __E_ENOTTY = static_cast<int32_t>(0x1003e),
    __E_ENXIO = static_cast<int32_t>(0x1003f),
    __E_EOVERFLOW = static_cast<int32_t>(0x10040),
    __E_EPERM = static_cast<int32_t>(0x10042),
    __E_EPIPE = static_cast<int32_t>(0x10043),
    __E_EPROTO = static_cast<int32_t>(0x10044),
    __E_EPROTONOSUPPORT = static_cast<int32_t>(0x10045),
    __E_EPROTOTYPE = static_cast<int32_t>(0x10046),
    __E_ERANGE = static_cast<int32_t>(0x10047),
    __E_EROFS = static_cast<int32_t>(0x10048),
    __E_ESPIPE = static_cast<int32_t>(0x10049),
    __E_ESRCH = static_cast<int32_t>(0x1004a),
    __E_ESTALE = static_cast<int32_t>(0x1004b),
    __E_ETIMEDOUT = static_cast<int32_t>(0x1004d),
    __E_ETXTBSY = static_cast<int32_t>(0x1004e),
    __E_EXDEV = static_cast<int32_t>(0x1004f),
    __E_ESOCKTNOSUPPORT = static_cast<int32_t>(0x1005e),
    __E_EPFNOSUPPORT = static_cast<int32_t>(0x10060),
    __E_ESHUTDOWN = static_cast<int32_t>(0x1006c),
    __E_EHOSTDOWN = static_cast<int32_t>(0x10070),
    __E_ENODATA = static_cast<int32_t>(0x10071),
    __E_EOPNOTSUPP = static_cast<int32_t>(0x1003d),
    __E_EWOULDBLOCK = static_cast<int32_t>(0x10006),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Interop_Error_Unwrapped() const noexcept {
    return static_cast<__Interop_Error_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Interop_Error();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Interop_Error(int32_t value__) noexcept;

  /// @brief Field SUCCESS value: I32(0)
  static ::GlobalNamespace::Interop_Error const SUCCESS;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2211 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field E2BIG value: I32(65537)
  static ::GlobalNamespace::Interop_Error const _cordl_E2BIG;

  /// @brief Field EACCES value: I32(65538)
  static ::GlobalNamespace::Interop_Error const _cordl_EACCES;

  /// @brief Field EADDRINUSE value: I32(65539)
  static ::GlobalNamespace::Interop_Error const _cordl_EADDRINUSE;

  /// @brief Field EADDRNOTAVAIL value: I32(65540)
  static ::GlobalNamespace::Interop_Error const _cordl_EADDRNOTAVAIL;

  /// @brief Field EAFNOSUPPORT value: I32(65541)
  static ::GlobalNamespace::Interop_Error const _cordl_EAFNOSUPPORT;

  /// @brief Field EAGAIN value: I32(65542)
  static ::GlobalNamespace::Interop_Error const _cordl_EAGAIN;

  /// @brief Field EALREADY value: I32(65543)
  static ::GlobalNamespace::Interop_Error const _cordl_EALREADY;

  /// @brief Field EBADF value: I32(65544)
  static ::GlobalNamespace::Interop_Error const _cordl_EBADF;

  /// @brief Field EBADMSG value: I32(65545)
  static ::GlobalNamespace::Interop_Error const _cordl_EBADMSG;

  /// @brief Field EBUSY value: I32(65546)
  static ::GlobalNamespace::Interop_Error const _cordl_EBUSY;

  /// @brief Field ECANCELED value: I32(65547)
  static ::GlobalNamespace::Interop_Error const _cordl_ECANCELED;

  /// @brief Field ECHILD value: I32(65548)
  static ::GlobalNamespace::Interop_Error const _cordl_ECHILD;

  /// @brief Field ECONNABORTED value: I32(65549)
  static ::GlobalNamespace::Interop_Error const _cordl_ECONNABORTED;

  /// @brief Field ECONNREFUSED value: I32(65550)
  static ::GlobalNamespace::Interop_Error const _cordl_ECONNREFUSED;

  /// @brief Field ECONNRESET value: I32(65551)
  static ::GlobalNamespace::Interop_Error const _cordl_ECONNRESET;

  /// @brief Field EDEADLK value: I32(65552)
  static ::GlobalNamespace::Interop_Error const _cordl_EDEADLK;

  /// @brief Field EDESTADDRREQ value: I32(65553)
  static ::GlobalNamespace::Interop_Error const _cordl_EDESTADDRREQ;

  /// @brief Field EDOM value: I32(65554)
  static ::GlobalNamespace::Interop_Error const _cordl_EDOM;

  /// @brief Field EDQUOT value: I32(65555)
  static ::GlobalNamespace::Interop_Error const _cordl_EDQUOT;

  /// @brief Field EEXIST value: I32(65556)
  static ::GlobalNamespace::Interop_Error const _cordl_EEXIST;

  /// @brief Field EFAULT value: I32(65557)
  static ::GlobalNamespace::Interop_Error const _cordl_EFAULT;

  /// @brief Field EFBIG value: I32(65558)
  static ::GlobalNamespace::Interop_Error const _cordl_EFBIG;

  /// @brief Field EHOSTDOWN value: I32(65648)
  static ::GlobalNamespace::Interop_Error const _cordl_EHOSTDOWN;

  /// @brief Field EHOSTUNREACH value: I32(65559)
  static ::GlobalNamespace::Interop_Error const _cordl_EHOSTUNREACH;

  /// @brief Field EIDRM value: I32(65560)
  static ::GlobalNamespace::Interop_Error const _cordl_EIDRM;

  /// @brief Field EILSEQ value: I32(65561)
  static ::GlobalNamespace::Interop_Error const _cordl_EILSEQ;

  /// @brief Field EINPROGRESS value: I32(65562)
  static ::GlobalNamespace::Interop_Error const _cordl_EINPROGRESS;

  /// @brief Field EINTR value: I32(65563)
  static ::GlobalNamespace::Interop_Error const _cordl_EINTR;

  /// @brief Field EINVAL value: I32(65564)
  static ::GlobalNamespace::Interop_Error const _cordl_EINVAL;

  /// @brief Field EIO value: I32(65565)
  static ::GlobalNamespace::Interop_Error const _cordl_EIO;

  /// @brief Field EISCONN value: I32(65566)
  static ::GlobalNamespace::Interop_Error const _cordl_EISCONN;

  /// @brief Field EISDIR value: I32(65567)
  static ::GlobalNamespace::Interop_Error const _cordl_EISDIR;

  /// @brief Field ELOOP value: I32(65568)
  static ::GlobalNamespace::Interop_Error const _cordl_ELOOP;

  /// @brief Field EMFILE value: I32(65569)
  static ::GlobalNamespace::Interop_Error const _cordl_EMFILE;

  /// @brief Field EMLINK value: I32(65570)
  static ::GlobalNamespace::Interop_Error const _cordl_EMLINK;

  /// @brief Field EMSGSIZE value: I32(65571)
  static ::GlobalNamespace::Interop_Error const _cordl_EMSGSIZE;

  /// @brief Field EMULTIHOP value: I32(65572)
  static ::GlobalNamespace::Interop_Error const _cordl_EMULTIHOP;

  /// @brief Field ENAMETOOLONG value: I32(65573)
  static ::GlobalNamespace::Interop_Error const _cordl_ENAMETOOLONG;

  /// @brief Field ENETDOWN value: I32(65574)
  static ::GlobalNamespace::Interop_Error const _cordl_ENETDOWN;

  /// @brief Field ENETRESET value: I32(65575)
  static ::GlobalNamespace::Interop_Error const _cordl_ENETRESET;

  /// @brief Field ENETUNREACH value: I32(65576)
  static ::GlobalNamespace::Interop_Error const _cordl_ENETUNREACH;

  /// @brief Field ENFILE value: I32(65577)
  static ::GlobalNamespace::Interop_Error const _cordl_ENFILE;

  /// @brief Field ENOBUFS value: I32(65578)
  static ::GlobalNamespace::Interop_Error const _cordl_ENOBUFS;

  /// @brief Field ENODATA value: I32(65649)
  static ::GlobalNamespace::Interop_Error const _cordl_ENODATA;

  /// @brief Field ENODEV value: I32(65580)
  static ::GlobalNamespace::Interop_Error const _cordl_ENODEV;

  /// @brief Field ENOENT value: I32(65581)
  static ::GlobalNamespace::Interop_Error const _cordl_ENOENT;

  /// @brief Field ENOEXEC value: I32(65582)
  static ::GlobalNamespace::Interop_Error const _cordl_ENOEXEC;

  /// @brief Field ENOLCK value: I32(65583)
  static ::GlobalNamespace::Interop_Error const _cordl_ENOLCK;

  /// @brief Field ENOLINK value: I32(65584)
  static ::GlobalNamespace::Interop_Error const _cordl_ENOLINK;

  /// @brief Field ENOMEM value: I32(65585)
  static ::GlobalNamespace::Interop_Error const _cordl_ENOMEM;

  /// @brief Field ENOMSG value: I32(65586)
  static ::GlobalNamespace::Interop_Error const _cordl_ENOMSG;

  /// @brief Field ENOPROTOOPT value: I32(65587)
  static ::GlobalNamespace::Interop_Error const _cordl_ENOPROTOOPT;

  /// @brief Field ENOSPC value: I32(65588)
  static ::GlobalNamespace::Interop_Error const _cordl_ENOSPC;

  /// @brief Field ENOSYS value: I32(65591)
  static ::GlobalNamespace::Interop_Error const _cordl_ENOSYS;

  /// @brief Field ENOTCONN value: I32(65592)
  static ::GlobalNamespace::Interop_Error const _cordl_ENOTCONN;

  /// @brief Field ENOTDIR value: I32(65593)
  static ::GlobalNamespace::Interop_Error const _cordl_ENOTDIR;

  /// @brief Field ENOTEMPTY value: I32(65594)
  static ::GlobalNamespace::Interop_Error const _cordl_ENOTEMPTY;

  /// @brief Field ENOTSOCK value: I32(65596)
  static ::GlobalNamespace::Interop_Error const _cordl_ENOTSOCK;

  /// @brief Field ENOTSUP value: I32(65597)
  static ::GlobalNamespace::Interop_Error const _cordl_ENOTSUP;

  /// @brief Field ENOTTY value: I32(65598)
  static ::GlobalNamespace::Interop_Error const _cordl_ENOTTY;

  /// @brief Field ENXIO value: I32(65599)
  static ::GlobalNamespace::Interop_Error const _cordl_ENXIO;

  /// @brief Field EOPNOTSUPP value: I32(65597)
  static ::GlobalNamespace::Interop_Error const _cordl_EOPNOTSUPP;

  /// @brief Field EOVERFLOW value: I32(65600)
  static ::GlobalNamespace::Interop_Error const _cordl_EOVERFLOW;

  /// @brief Field EPERM value: I32(65602)
  static ::GlobalNamespace::Interop_Error const _cordl_EPERM;

  /// @brief Field EPFNOSUPPORT value: I32(65632)
  static ::GlobalNamespace::Interop_Error const _cordl_EPFNOSUPPORT;

  /// @brief Field EPIPE value: I32(65603)
  static ::GlobalNamespace::Interop_Error const _cordl_EPIPE;

  /// @brief Field EPROTO value: I32(65604)
  static ::GlobalNamespace::Interop_Error const _cordl_EPROTO;

  /// @brief Field EPROTONOSUPPORT value: I32(65605)
  static ::GlobalNamespace::Interop_Error const _cordl_EPROTONOSUPPORT;

  /// @brief Field EPROTOTYPE value: I32(65606)
  static ::GlobalNamespace::Interop_Error const _cordl_EPROTOTYPE;

  /// @brief Field ERANGE value: I32(65607)
  static ::GlobalNamespace::Interop_Error const _cordl_ERANGE;

  /// @brief Field EROFS value: I32(65608)
  static ::GlobalNamespace::Interop_Error const _cordl_EROFS;

  /// @brief Field ESHUTDOWN value: I32(65644)
  static ::GlobalNamespace::Interop_Error const _cordl_ESHUTDOWN;

  /// @brief Field ESOCKTNOSUPPORT value: I32(65630)
  static ::GlobalNamespace::Interop_Error const _cordl_ESOCKTNOSUPPORT;

  /// @brief Field ESPIPE value: I32(65609)
  static ::GlobalNamespace::Interop_Error const _cordl_ESPIPE;

  /// @brief Field ESRCH value: I32(65610)
  static ::GlobalNamespace::Interop_Error const _cordl_ESRCH;

  /// @brief Field ESTALE value: I32(65611)
  static ::GlobalNamespace::Interop_Error const _cordl_ESTALE;

  /// @brief Field ETIMEDOUT value: I32(65613)
  static ::GlobalNamespace::Interop_Error const _cordl_ETIMEDOUT;

  /// @brief Field ETXTBSY value: I32(65614)
  static ::GlobalNamespace::Interop_Error const _cordl_ETXTBSY;

  /// @brief Field EWOULDBLOCK value: I32(65542)
  static ::GlobalNamespace::Interop_Error const _cordl_EWOULDBLOCK;

  /// @brief Field EXDEV value: I32(65615)
  static ::GlobalNamespace::Interop_Error const _cordl_EXDEV;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Interop_Error, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Interop_Error, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies Interop::Error
namespace GlobalNamespace {
// Is value type: true
// CS Name: Interop/ErrorInfo
struct CORDL_TYPE Interop_ErrorInfo {
public:
  // Declarations
  __declspec(property(get = get_Error)) ::GlobalNamespace::Interop_Error Error;

  __declspec(property(get = get_RawErrno)) int32_t RawErrno;

  /// @brief Method GetErrorMessage, addr 0x3c4f4c4, size 0x64, virtual false, abstract: false, final false
  inline ::StringW GetErrorMessage();

  /// @brief Method ToString, addr 0x3c4f710, size 0xd4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x3c4f590, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(int32_t _cordl_errno);

  /// @brief Method .ctor, addr 0x3c4f5fc, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::Interop_Error error);

  /// @brief Method get_Error, addr 0x3c4f608, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::Interop_Error get_Error();

  /// @brief Method get_RawErrno, addr 0x3c4f458, size 0x6c, virtual false, abstract: false, final false
  inline int32_t get_RawErrno();

  // Ctor Parameters []
  // @brief default ctor
  constexpr Interop_ErrorInfo();

  // Ctor Parameters [CppParam { name: "_error", ty: "::GlobalNamespace::Interop_Error", modifiers: "", def_value: None }, CppParam { name: "_rawErrno", ty: "int32_t", modifiers: "", def_value: None
  // }]
  constexpr Interop_ErrorInfo(::GlobalNamespace::Interop_Error _error, int32_t _rawErrno) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2212 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field _error, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::Interop_Error _error;

  /// @brief Field _rawErrno, offset: 0x4, size: 0x4, def value: None
  int32_t _rawErrno;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Interop_ErrorInfo, _error) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Interop_ErrorInfo, _rawErrno) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Interop_ErrorInfo, 0x8>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: Interop/Sys/NodeType
struct CORDL_TYPE Sys_Interop_NodeType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Sys_Interop_NodeType_Unwrapped
  enum struct __Sys_Interop_NodeType_Unwrapped : int32_t {
    __E_DT_UNKNOWN = static_cast<int32_t>(0x0),
    __E_DT_FIFO = static_cast<int32_t>(0x1),
    __E_DT_CHR = static_cast<int32_t>(0x2),
    __E_DT_DIR = static_cast<int32_t>(0x4),
    __E_DT_BLK = static_cast<int32_t>(0x6),
    __E_DT_REG = static_cast<int32_t>(0x8),
    __E_DT_LNK = static_cast<int32_t>(0xa),
    __E_DT_SOCK = static_cast<int32_t>(0xc),
    __E_DT_WHT = static_cast<int32_t>(0xe),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Sys_Interop_NodeType_Unwrapped() const noexcept {
    return static_cast<__Sys_Interop_NodeType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Sys_Interop_NodeType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Sys_Interop_NodeType(int32_t value__) noexcept;

  /// @brief Field DT_BLK value: I32(6)
  static ::GlobalNamespace::Sys_Interop_NodeType const DT_BLK;

  /// @brief Field DT_CHR value: I32(2)
  static ::GlobalNamespace::Sys_Interop_NodeType const DT_CHR;

  /// @brief Field DT_DIR value: I32(4)
  static ::GlobalNamespace::Sys_Interop_NodeType const DT_DIR;

  /// @brief Field DT_FIFO value: I32(1)
  static ::GlobalNamespace::Sys_Interop_NodeType const DT_FIFO;

  /// @brief Field DT_LNK value: I32(10)
  static ::GlobalNamespace::Sys_Interop_NodeType const DT_LNK;

  /// @brief Field DT_REG value: I32(8)
  static ::GlobalNamespace::Sys_Interop_NodeType const DT_REG;

  /// @brief Field DT_SOCK value: I32(12)
  static ::GlobalNamespace::Sys_Interop_NodeType const DT_SOCK;

  /// @brief Field DT_UNKNOWN value: I32(0)
  static ::GlobalNamespace::Sys_Interop_NodeType const DT_UNKNOWN;

  /// @brief Field DT_WHT value: I32(14)
  static ::GlobalNamespace::Sys_Interop_NodeType const DT_WHT;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2213 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Sys_Interop_NodeType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Sys_Interop_NodeType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies Interop::Sys::NodeType
namespace GlobalNamespace {
// Is value type: true
// CS Name: Interop/Sys/DirectoryEntry
struct CORDL_TYPE Sys_Interop_DirectoryEntry {
public:
  // Declarations
  /// @brief Method GetName, addr 0x3c5007c, size 0x124, virtual false, abstract: false, final false
  inline ::System::ReadOnlySpan_1<char16_t> GetName(::System::Span_1<char16_t> buffer);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Sys_Interop_DirectoryEntry();

  // Ctor Parameters [CppParam { name: "Name", ty: "::cordl_internals::Ptr<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "NameLength", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "InodeType", ty: "::GlobalNamespace::Sys_Interop_NodeType", modifiers: "", def_value: None }]
  constexpr Sys_Interop_DirectoryEntry(::cordl_internals::Ptr<uint8_t> Name, int32_t NameLength, ::GlobalNamespace::Sys_Interop_NodeType InodeType) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2214 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field Name, offset: 0x0, size: 0x8, def value: None
  ::cordl_internals::Ptr<uint8_t> Name;

  /// @brief Field NameLength, offset: 0x8, size: 0x4, def value: None
  int32_t NameLength;

  /// @brief Field InodeType, offset: 0xc, size: 0x4, def value: None
  ::GlobalNamespace::Sys_Interop_NodeType InodeType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Sys_Interop_DirectoryEntry, Name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Sys_Interop_DirectoryEntry, NameLength) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Sys_Interop_DirectoryEntry, InodeType) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Sys_Interop_DirectoryEntry, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: Interop/Sys/FileStatusFlags
struct CORDL_TYPE Sys_Interop_FileStatusFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Sys_Interop_FileStatusFlags_Unwrapped
  enum struct __Sys_Interop_FileStatusFlags_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_HasBirthTime = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Sys_Interop_FileStatusFlags_Unwrapped() const noexcept {
    return static_cast<__Sys_Interop_FileStatusFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Sys_Interop_FileStatusFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Sys_Interop_FileStatusFlags(int32_t value__) noexcept;

  /// @brief Field HasBirthTime value: I32(1)
  static ::GlobalNamespace::Sys_Interop_FileStatusFlags const HasBirthTime;

  /// @brief Field None value: I32(0)
  static ::GlobalNamespace::Sys_Interop_FileStatusFlags const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2216 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Sys_Interop_FileStatusFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Sys_Interop_FileStatusFlags, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies Interop::Sys::FileStatusFlags
namespace GlobalNamespace {
// Is value type: true
// CS Name: Interop/Sys/FileStatus
struct CORDL_TYPE Sys_Interop_FileStatus {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Sys_Interop_FileStatus();

  // Ctor Parameters [CppParam { name: "Flags", ty: "::GlobalNamespace::Sys_Interop_FileStatusFlags", modifiers: "", def_value: None }, CppParam { name: "Mode", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "Uid", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "Gid", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "Size", ty:
  // "int64_t", modifiers: "", def_value: None }, CppParam { name: "ATime", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "ATimeNsec", ty: "int64_t", modifiers: "", def_value: None
  // }, CppParam { name: "MTime", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "MTimeNsec", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "CTime", ty:
  // "int64_t", modifiers: "", def_value: None }, CppParam { name: "CTimeNsec", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "BirthTime", ty: "int64_t", modifiers: "", def_value:
  // None }, CppParam { name: "BirthTimeNsec", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "Dev", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "Ino", ty:
  // "int64_t", modifiers: "", def_value: None }, CppParam { name: "UserFlags", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr Sys_Interop_FileStatus(::GlobalNamespace::Sys_Interop_FileStatusFlags Flags, int32_t Mode, uint32_t Uid, uint32_t Gid, int64_t Size, int64_t ATime, int64_t ATimeNsec, int64_t MTime,
                                   int64_t MTimeNsec, int64_t CTime, int64_t CTimeNsec, int64_t BirthTime, int64_t BirthTimeNsec, int64_t Dev, int64_t Ino, uint32_t UserFlags) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2215 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x70 };

  /// @brief Field Flags, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::Sys_Interop_FileStatusFlags Flags;

  /// @brief Field Mode, offset: 0x4, size: 0x4, def value: None
  int32_t Mode;

  /// @brief Field Uid, offset: 0x8, size: 0x4, def value: None
  uint32_t Uid;

  /// @brief Field Gid, offset: 0xc, size: 0x4, def value: None
  uint32_t Gid;

  /// @brief Field Size, offset: 0x10, size: 0x8, def value: None
  int64_t Size;

  /// @brief Field ATime, offset: 0x18, size: 0x8, def value: None
  int64_t ATime;

  /// @brief Field ATimeNsec, offset: 0x20, size: 0x8, def value: None
  int64_t ATimeNsec;

  /// @brief Field MTime, offset: 0x28, size: 0x8, def value: None
  int64_t MTime;

  /// @brief Field MTimeNsec, offset: 0x30, size: 0x8, def value: None
  int64_t MTimeNsec;

  /// @brief Field CTime, offset: 0x38, size: 0x8, def value: None
  int64_t CTime;

  /// @brief Field CTimeNsec, offset: 0x40, size: 0x8, def value: None
  int64_t CTimeNsec;

  /// @brief Field BirthTime, offset: 0x48, size: 0x8, def value: None
  int64_t BirthTime;

  /// @brief Field BirthTimeNsec, offset: 0x50, size: 0x8, def value: None
  int64_t BirthTimeNsec;

  /// @brief Field Dev, offset: 0x58, size: 0x8, def value: None
  int64_t Dev;

  /// @brief Field Ino, offset: 0x60, size: 0x8, def value: None
  int64_t Ino;

  /// @brief Field UserFlags, offset: 0x68, size: 0x4, def value: None
  uint32_t UserFlags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Sys_Interop_FileStatus, Flags) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Sys_Interop_FileStatus, Mode) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Sys_Interop_FileStatus, Uid) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Sys_Interop_FileStatus, Gid) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Sys_Interop_FileStatus, Size) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Sys_Interop_FileStatus, ATime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Sys_Interop_FileStatus, ATimeNsec) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Sys_Interop_FileStatus, MTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Sys_Interop_FileStatus, MTimeNsec) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Sys_Interop_FileStatus, CTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Sys_Interop_FileStatus, CTimeNsec) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Sys_Interop_FileStatus, BirthTime) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Sys_Interop_FileStatus, BirthTimeNsec) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Sys_Interop_FileStatus, Dev) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Sys_Interop_FileStatus, Ino) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Sys_Interop_FileStatus, UserFlags) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Sys_Interop_FileStatus, 0x70>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: Interop/Sys/Permissions
struct CORDL_TYPE Sys_Interop_Permissions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Sys_Interop_Permissions_Unwrapped
  enum struct __Sys_Interop_Permissions_Unwrapped : int32_t {
    __E_Mask = static_cast<int32_t>(0x1ff),
    __E_S_IRWXU = static_cast<int32_t>(0x1c0),
    __E_S_IRUSR = static_cast<int32_t>(0x100),
    __E_S_IWUSR = static_cast<int32_t>(0x80),
    __E_S_IXUSR = static_cast<int32_t>(0x40),
    __E_S_IRWXG = static_cast<int32_t>(0x38),
    __E_S_IRGRP = static_cast<int32_t>(0x20),
    __E_S_IWGRP = static_cast<int32_t>(0x10),
    __E_S_IXGRP = static_cast<int32_t>(0x8),
    __E_S_IRWXO = static_cast<int32_t>(0x7),
    __E_S_IROTH = static_cast<int32_t>(0x4),
    __E_S_IWOTH = static_cast<int32_t>(0x2),
    __E_S_IXOTH = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Sys_Interop_Permissions_Unwrapped() const noexcept {
    return static_cast<__Sys_Interop_Permissions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Sys_Interop_Permissions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Sys_Interop_Permissions(int32_t value__) noexcept;

  /// @brief Field Mask value: I32(511)
  static ::GlobalNamespace::Sys_Interop_Permissions const Mask;

  /// @brief Field S_IRGRP value: I32(32)
  static ::GlobalNamespace::Sys_Interop_Permissions const S_IRGRP;

  /// @brief Field S_IROTH value: I32(4)
  static ::GlobalNamespace::Sys_Interop_Permissions const S_IROTH;

  /// @brief Field S_IRUSR value: I32(256)
  static ::GlobalNamespace::Sys_Interop_Permissions const S_IRUSR;

  /// @brief Field S_IRWXG value: I32(56)
  static ::GlobalNamespace::Sys_Interop_Permissions const S_IRWXG;

  /// @brief Field S_IRWXO value: I32(7)
  static ::GlobalNamespace::Sys_Interop_Permissions const S_IRWXO;

  /// @brief Field S_IRWXU value: I32(448)
  static ::GlobalNamespace::Sys_Interop_Permissions const S_IRWXU;

  /// @brief Field S_IWGRP value: I32(16)
  static ::GlobalNamespace::Sys_Interop_Permissions const S_IWGRP;

  /// @brief Field S_IWOTH value: I32(2)
  static ::GlobalNamespace::Sys_Interop_Permissions const S_IWOTH;

  /// @brief Field S_IWUSR value: I32(128)
  static ::GlobalNamespace::Sys_Interop_Permissions const S_IWUSR;

  /// @brief Field S_IXGRP value: I32(8)
  static ::GlobalNamespace::Sys_Interop_Permissions const S_IXGRP;

  /// @brief Field S_IXOTH value: I32(1)
  static ::GlobalNamespace::Sys_Interop_Permissions const S_IXOTH;

  /// @brief Field S_IXUSR value: I32(64)
  static ::GlobalNamespace::Sys_Interop_Permissions const S_IXUSR;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2217 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Sys_Interop_Permissions, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Sys_Interop_Permissions, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Interop/Sys
class CORDL_TYPE Interop_Sys : public ::System::Object {
public:
  // Declarations
  using DirectoryEntry = ::GlobalNamespace::Sys_Interop_DirectoryEntry;

  using FileStatus = ::GlobalNamespace::Sys_Interop_FileStatus;

  using FileStatusFlags = ::GlobalNamespace::Sys_Interop_FileStatusFlags;

  using NodeType = ::GlobalNamespace::Sys_Interop_NodeType;

  using Permissions = ::GlobalNamespace::Sys_Interop_Permissions;

  /// @brief Field CanSetHiddenFlag, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_CanSetHiddenFlag, put = setStaticF_CanSetHiddenFlag)) bool CanSetHiddenFlag;

  /// @brief Method CloseDir, addr 0x3c4f824, size 0x1c, virtual false, abstract: false, final false
  static inline int32_t CloseDir(::System::IntPtr dir);

  /// @brief Method ConvertErrorPalToPlatform, addr 0x3c4f610, size 0x4, virtual false, abstract: false, final false
  static inline int32_t ConvertErrorPalToPlatform(::GlobalNamespace::Interop_Error error);

  /// @brief Method ConvertErrorPlatformToPal, addr 0x3c4f5f8, size 0x4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::Interop_Error ConvertErrorPlatformToPal(int32_t platformErrno);

  /// @brief Method CopyFile, addr 0x3c4fb70, size 0xb4, virtual false, abstract: false, final false
  static inline int32_t CopyFile(::Microsoft::Win32::SafeHandles::SafeFileHandle* source, ::Microsoft::Win32::SafeHandles::SafeFileHandle* destination);

  /// @brief Method DoubleToString, addr 0x3c50024, size 0x4, virtual false, abstract: false, final false
  static inline int32_t DoubleToString(double_t value, ::cordl_internals::Ptr<uint8_t> format, ::cordl_internals::Ptr<uint8_t> buffer, int32_t bufferLength);

  /// @brief Method GetEGid, addr 0x3c4fc24, size 0x4, virtual false, abstract: false, final false
  static inline uint32_t GetEGid();

  /// @brief Method GetEUid, addr 0x3c4fc28, size 0x4, virtual false, abstract: false, final false
  static inline uint32_t GetEUid();

  /// @brief Method GetLastErrorInfo, addr 0x3c4f2dc, size 0x68, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::Interop_ErrorInfo GetLastErrorInfo();

  /// @brief Method GetNonCryptographicallySecureRandomBytes, addr 0x3c4f58c, size 0x4, virtual false, abstract: false, final false
  static inline void GetNonCryptographicallySecureRandomBytes(::cordl_internals::Ptr<uint8_t> buffer, int32_t length);

  /// @brief Method GetReadDirRBufferSize, addr 0x3c4f81c, size 0x4, virtual false, abstract: false, final false
  static inline int32_t GetReadDirRBufferSize();

  /// @brief Method LChflagsCanSetHiddenFlag, addr 0x3c4fc2c, size 0x4, virtual false, abstract: false, final false
  static inline int32_t LChflagsCanSetHiddenFlag();

  /// @brief Method LStat, addr 0x3c4fe9c, size 0x1c, virtual false, abstract: false, final false
  static inline int32_t LStat(::ByRef<uint8_t> path, ::ByRef<::GlobalNamespace::Sys_Interop_FileStatus> output);

  /// @brief Method LStat, addr 0x3c4fae0, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t LStat(::StringW path, ::ByRef<::GlobalNamespace::Sys_Interop_FileStatus> output);

  /// @brief Method LStat, addr 0x3c4feb8, size 0x138, virtual false, abstract: false, final false
  static inline int32_t LStat(::System::ReadOnlySpan_1<char16_t> path, ::ByRef<::GlobalNamespace::Sys_Interop_FileStatus> output);

  /// @brief Method Link, addr 0x3c4fc30, size 0x54, virtual false, abstract: false, final false
  static inline int32_t Link(::StringW source, ::StringW link);

  /// @brief Method MkDir, addr 0x3c4fc84, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t MkDir(::StringW path, int32_t mode);

  /// @brief Method OpenDir, addr 0x3c4f7e8, size 0x34, virtual false, abstract: false, final false
  static inline ::System::IntPtr OpenDir(::StringW path);

  /// @brief Method ReadDirR, addr 0x3c4f820, size 0x4, virtual false, abstract: false, final false
  static inline int32_t ReadDirR(::System::IntPtr dir, ::cordl_internals::Ptr<uint8_t> buffer, int32_t bufferSize, ::ByRef<::GlobalNamespace::Sys_Interop_DirectoryEntry> outputEntry);

  /// @brief Method ReadLink, addr 0x3c4f88c, size 0x218, virtual false, abstract: false, final false
  static inline ::StringW ReadLink(::StringW path);

  /// @brief Method ReadLink, addr 0x3c4f840, size 0x4c, virtual false, abstract: false, final false
  static inline int32_t ReadLink(::StringW path, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t bufferSize);

  /// @brief Method Rename, addr 0x3c4fcc0, size 0x54, virtual false, abstract: false, final false
  static inline int32_t Rename(::StringW oldPath, ::StringW newPath);

  /// @brief Method RmDir, addr 0x3c4fd14, size 0x34, virtual false, abstract: false, final false
  static inline int32_t RmDir(::StringW path);

  /// @brief Method Stat, addr 0x3c4fd48, size 0x1c, virtual false, abstract: false, final false
  static inline int32_t Stat(::ByRef<uint8_t> path, ::ByRef<::GlobalNamespace::Sys_Interop_FileStatus> output);

  /// @brief Method Stat, addr 0x3c4faa4, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t Stat(::StringW path, ::ByRef<::GlobalNamespace::Sys_Interop_FileStatus> output);

  /// @brief Method Stat, addr 0x3c4fd64, size 0x138, virtual false, abstract: false, final false
  static inline int32_t Stat(::System::ReadOnlySpan_1<char16_t> path, ::ByRef<::GlobalNamespace::Sys_Interop_FileStatus> output);

  /// @brief Method StrError, addr 0x3c4f614, size 0xfc, virtual false, abstract: false, final false
  static inline ::StringW StrError(int32_t platformErrno);

  /// @brief Method StrErrorR, addr 0x3c4f7e4, size 0x4, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<uint8_t> StrErrorR(int32_t platformErrno, ::cordl_internals::Ptr<uint8_t> buffer, int32_t bufferSize);

  /// @brief Method Symlink, addr 0x3c4fb1c, size 0x54, virtual false, abstract: false, final false
  static inline int32_t Symlink(::StringW target, ::StringW linkPath);

  /// @brief Method Unlink, addr 0x3c4fff0, size 0x34, virtual false, abstract: false, final false
  static inline int32_t Unlink(::StringW pathname);

  static inline bool getStaticF_CanSetHiddenFlag();

  static inline void setStaticF_CanSetHiddenFlag(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Interop_Sys();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Interop_Sys", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Interop_Sys(Interop_Sys&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Interop_Sys", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Interop_Sys(Interop_Sys const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2218 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Interop_Sys, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Interop
class CORDL_TYPE Interop : public ::System::Object {
public:
  // Declarations
  using Error = ::GlobalNamespace::Interop_Error;

  using ErrorInfo = ::GlobalNamespace::Interop_ErrorInfo;

  using Sys = ::GlobalNamespace::Interop_Sys;

  /// @brief Method CheckIo, addr 0x3c4f344, size 0x20, virtual false, abstract: false, final false
  static inline int32_t CheckIo(int32_t result, ::StringW path, bool isDirectory, ::System::Func_2<::GlobalNamespace::Interop_ErrorInfo, ::GlobalNamespace::Interop_ErrorInfo>* errorRewriter);

  /// @brief Method CheckIo, addr 0x3c4f264, size 0x78, virtual false, abstract: false, final false
  static inline int64_t CheckIo(int64_t result, ::StringW path, bool isDirectory, ::System::Func_2<::GlobalNamespace::Interop_ErrorInfo, ::GlobalNamespace::Interop_ErrorInfo>* errorRewriter);

  /// @brief Method GetExceptionForIoErrno, addr 0x3c4ed78, size 0x4ec, virtual false, abstract: false, final false
  static inline ::System::Exception* GetExceptionForIoErrno(::GlobalNamespace::Interop_ErrorInfo errorInfo, ::StringW path, bool isDirectory);

  /// @brief Method GetIOException, addr 0x3c4f3d4, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* GetIOException(::GlobalNamespace::Interop_ErrorInfo errorInfo);

  /// @brief Method GetRandomBytes, addr 0x3c4f528, size 0x64, virtual false, abstract: false, final false
  static inline void GetRandomBytes(::cordl_internals::Ptr<uint8_t> buffer, int32_t length);

  /// @brief Method ThrowExceptionForIoErrno, addr 0x3c4ed20, size 0x58, virtual false, abstract: false, final false
  static inline void ThrowExceptionForIoErrno(::GlobalNamespace::Interop_ErrorInfo errorInfo, ::StringW path, bool isDirectory,
                                              ::System::Func_2<::GlobalNamespace::Interop_ErrorInfo, ::GlobalNamespace::Interop_ErrorInfo>* errorRewriter);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Interop();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Interop", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Interop(Interop&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Interop", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Interop(Interop const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2219 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Interop, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Interop_Error, "", "Interop/Error");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Sys_Interop_FileStatusFlags, "", "Interop/Sys/FileStatusFlags");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Sys_Interop_NodeType, "", "Interop/Sys/NodeType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Sys_Interop_Permissions, "", "Interop/Sys/Permissions");
NEED_NO_BOX(::GlobalNamespace::Interop);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Interop*, "", "Interop");
NEED_NO_BOX(::GlobalNamespace::Interop_Sys);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Interop_Sys*, "", "Interop/Sys");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Interop_ErrorInfo, "", "Interop/ErrorInfo");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Sys_Interop_DirectoryEntry, "", "Interop/Sys/DirectoryEntry");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Sys_Interop_FileStatus, "", "Interop/Sys/FileStatus");
