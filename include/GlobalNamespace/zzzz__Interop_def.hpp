#pragma once
// IWYU pragma private; include "GlobalNamespace/Interop.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Interop_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Interop)
namespace GlobalNamespace {
struct __Interop__ErrorInfo;
}
namespace GlobalNamespace {
struct __Interop__Error;
}
namespace GlobalNamespace {
class __Interop__Sys;
}
namespace GlobalNamespace {
struct __Interop__Sys__DirectoryEntry;
}
namespace GlobalNamespace {
struct __Interop__Sys__FileStatusFlags;
}
namespace GlobalNamespace {
struct __Interop__Sys__FileStatus;
}
namespace GlobalNamespace {
struct __Interop__Sys__NodeType;
}
namespace GlobalNamespace {
struct __Interop__Sys__Permissions;
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
struct __Interop__Error;
}
namespace GlobalNamespace {
struct __Interop__Sys__FileStatusFlags;
}
namespace GlobalNamespace {
struct __Interop__Sys__NodeType;
}
namespace GlobalNamespace {
struct __Interop__Sys__Permissions;
}
namespace GlobalNamespace {
class Interop;
}
namespace GlobalNamespace {
class __Interop__Sys;
}
namespace GlobalNamespace {
struct __Interop__ErrorInfo;
}
namespace GlobalNamespace {
struct __Interop__Sys__DirectoryEntry;
}
namespace GlobalNamespace {
struct __Interop__Sys__FileStatus;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__Interop__Error);
MARK_VAL_T(::GlobalNamespace::__Interop__Sys__FileStatusFlags);
MARK_VAL_T(::GlobalNamespace::__Interop__Sys__NodeType);
MARK_VAL_T(::GlobalNamespace::__Interop__Sys__Permissions);
MARK_REF_PTR_T(::GlobalNamespace::Interop);
MARK_REF_PTR_T(::GlobalNamespace::__Interop__Sys);
MARK_VAL_T(::GlobalNamespace::__Interop__ErrorInfo);
MARK_VAL_T(::GlobalNamespace::__Interop__Sys__DirectoryEntry);
MARK_VAL_T(::GlobalNamespace::__Interop__Sys__FileStatus);
// Type: ::Error
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::Interop::Error
struct CORDL_TYPE __Interop__Error {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Interop__Error_Unwrapped
  enum struct ____Interop__Error_Unwrapped : int32_t {
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
  constexpr operator ____Interop__Error_Unwrapped() const noexcept {
    return static_cast<____Interop__Error_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Interop__Error();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Interop__Error(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field SUCCESS value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__Interop__Error const SUCCESS;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field E2BIG value: static_cast<int32_t>(0x10001)
  static ::GlobalNamespace::__Interop__Error const _cordl_E2BIG;

  /// @brief Field EACCES value: static_cast<int32_t>(0x10002)
  static ::GlobalNamespace::__Interop__Error const _cordl_EACCES;

  /// @brief Field EADDRINUSE value: static_cast<int32_t>(0x10003)
  static ::GlobalNamespace::__Interop__Error const _cordl_EADDRINUSE;

  /// @brief Field EADDRNOTAVAIL value: static_cast<int32_t>(0x10004)
  static ::GlobalNamespace::__Interop__Error const _cordl_EADDRNOTAVAIL;

  /// @brief Field EAFNOSUPPORT value: static_cast<int32_t>(0x10005)
  static ::GlobalNamespace::__Interop__Error const _cordl_EAFNOSUPPORT;

  /// @brief Field EAGAIN value: static_cast<int32_t>(0x10006)
  static ::GlobalNamespace::__Interop__Error const _cordl_EAGAIN;

  /// @brief Field EALREADY value: static_cast<int32_t>(0x10007)
  static ::GlobalNamespace::__Interop__Error const _cordl_EALREADY;

  /// @brief Field EBADF value: static_cast<int32_t>(0x10008)
  static ::GlobalNamespace::__Interop__Error const _cordl_EBADF;

  /// @brief Field EBADMSG value: static_cast<int32_t>(0x10009)
  static ::GlobalNamespace::__Interop__Error const _cordl_EBADMSG;

  /// @brief Field EBUSY value: static_cast<int32_t>(0x1000a)
  static ::GlobalNamespace::__Interop__Error const _cordl_EBUSY;

  /// @brief Field ECANCELED value: static_cast<int32_t>(0x1000b)
  static ::GlobalNamespace::__Interop__Error const _cordl_ECANCELED;

  /// @brief Field ECHILD value: static_cast<int32_t>(0x1000c)
  static ::GlobalNamespace::__Interop__Error const _cordl_ECHILD;

  /// @brief Field ECONNABORTED value: static_cast<int32_t>(0x1000d)
  static ::GlobalNamespace::__Interop__Error const _cordl_ECONNABORTED;

  /// @brief Field ECONNREFUSED value: static_cast<int32_t>(0x1000e)
  static ::GlobalNamespace::__Interop__Error const _cordl_ECONNREFUSED;

  /// @brief Field ECONNRESET value: static_cast<int32_t>(0x1000f)
  static ::GlobalNamespace::__Interop__Error const _cordl_ECONNRESET;

  /// @brief Field EDEADLK value: static_cast<int32_t>(0x10010)
  static ::GlobalNamespace::__Interop__Error const _cordl_EDEADLK;

  /// @brief Field EDESTADDRREQ value: static_cast<int32_t>(0x10011)
  static ::GlobalNamespace::__Interop__Error const _cordl_EDESTADDRREQ;

  /// @brief Field EDOM value: static_cast<int32_t>(0x10012)
  static ::GlobalNamespace::__Interop__Error const _cordl_EDOM;

  /// @brief Field EDQUOT value: static_cast<int32_t>(0x10013)
  static ::GlobalNamespace::__Interop__Error const _cordl_EDQUOT;

  /// @brief Field EEXIST value: static_cast<int32_t>(0x10014)
  static ::GlobalNamespace::__Interop__Error const _cordl_EEXIST;

  /// @brief Field EFAULT value: static_cast<int32_t>(0x10015)
  static ::GlobalNamespace::__Interop__Error const _cordl_EFAULT;

  /// @brief Field EFBIG value: static_cast<int32_t>(0x10016)
  static ::GlobalNamespace::__Interop__Error const _cordl_EFBIG;

  /// @brief Field EHOSTDOWN value: static_cast<int32_t>(0x10070)
  static ::GlobalNamespace::__Interop__Error const _cordl_EHOSTDOWN;

  /// @brief Field EHOSTUNREACH value: static_cast<int32_t>(0x10017)
  static ::GlobalNamespace::__Interop__Error const _cordl_EHOSTUNREACH;

  /// @brief Field EIDRM value: static_cast<int32_t>(0x10018)
  static ::GlobalNamespace::__Interop__Error const _cordl_EIDRM;

  /// @brief Field EILSEQ value: static_cast<int32_t>(0x10019)
  static ::GlobalNamespace::__Interop__Error const _cordl_EILSEQ;

  /// @brief Field EINPROGRESS value: static_cast<int32_t>(0x1001a)
  static ::GlobalNamespace::__Interop__Error const _cordl_EINPROGRESS;

  /// @brief Field EINTR value: static_cast<int32_t>(0x1001b)
  static ::GlobalNamespace::__Interop__Error const _cordl_EINTR;

  /// @brief Field EINVAL value: static_cast<int32_t>(0x1001c)
  static ::GlobalNamespace::__Interop__Error const _cordl_EINVAL;

  /// @brief Field EIO value: static_cast<int32_t>(0x1001d)
  static ::GlobalNamespace::__Interop__Error const _cordl_EIO;

  /// @brief Field EISCONN value: static_cast<int32_t>(0x1001e)
  static ::GlobalNamespace::__Interop__Error const _cordl_EISCONN;

  /// @brief Field EISDIR value: static_cast<int32_t>(0x1001f)
  static ::GlobalNamespace::__Interop__Error const _cordl_EISDIR;

  /// @brief Field ELOOP value: static_cast<int32_t>(0x10020)
  static ::GlobalNamespace::__Interop__Error const _cordl_ELOOP;

  /// @brief Field EMFILE value: static_cast<int32_t>(0x10021)
  static ::GlobalNamespace::__Interop__Error const _cordl_EMFILE;

  /// @brief Field EMLINK value: static_cast<int32_t>(0x10022)
  static ::GlobalNamespace::__Interop__Error const _cordl_EMLINK;

  /// @brief Field EMSGSIZE value: static_cast<int32_t>(0x10023)
  static ::GlobalNamespace::__Interop__Error const _cordl_EMSGSIZE;

  /// @brief Field EMULTIHOP value: static_cast<int32_t>(0x10024)
  static ::GlobalNamespace::__Interop__Error const _cordl_EMULTIHOP;

  /// @brief Field ENAMETOOLONG value: static_cast<int32_t>(0x10025)
  static ::GlobalNamespace::__Interop__Error const _cordl_ENAMETOOLONG;

  /// @brief Field ENETDOWN value: static_cast<int32_t>(0x10026)
  static ::GlobalNamespace::__Interop__Error const _cordl_ENETDOWN;

  /// @brief Field ENETRESET value: static_cast<int32_t>(0x10027)
  static ::GlobalNamespace::__Interop__Error const _cordl_ENETRESET;

  /// @brief Field ENETUNREACH value: static_cast<int32_t>(0x10028)
  static ::GlobalNamespace::__Interop__Error const _cordl_ENETUNREACH;

  /// @brief Field ENFILE value: static_cast<int32_t>(0x10029)
  static ::GlobalNamespace::__Interop__Error const _cordl_ENFILE;

  /// @brief Field ENOBUFS value: static_cast<int32_t>(0x1002a)
  static ::GlobalNamespace::__Interop__Error const _cordl_ENOBUFS;

  /// @brief Field ENODATA value: static_cast<int32_t>(0x10071)
  static ::GlobalNamespace::__Interop__Error const _cordl_ENODATA;

  /// @brief Field ENODEV value: static_cast<int32_t>(0x1002c)
  static ::GlobalNamespace::__Interop__Error const _cordl_ENODEV;

  /// @brief Field ENOENT value: static_cast<int32_t>(0x1002d)
  static ::GlobalNamespace::__Interop__Error const _cordl_ENOENT;

  /// @brief Field ENOEXEC value: static_cast<int32_t>(0x1002e)
  static ::GlobalNamespace::__Interop__Error const _cordl_ENOEXEC;

  /// @brief Field ENOLCK value: static_cast<int32_t>(0x1002f)
  static ::GlobalNamespace::__Interop__Error const _cordl_ENOLCK;

  /// @brief Field ENOLINK value: static_cast<int32_t>(0x10030)
  static ::GlobalNamespace::__Interop__Error const _cordl_ENOLINK;

  /// @brief Field ENOMEM value: static_cast<int32_t>(0x10031)
  static ::GlobalNamespace::__Interop__Error const _cordl_ENOMEM;

  /// @brief Field ENOMSG value: static_cast<int32_t>(0x10032)
  static ::GlobalNamespace::__Interop__Error const _cordl_ENOMSG;

  /// @brief Field ENOPROTOOPT value: static_cast<int32_t>(0x10033)
  static ::GlobalNamespace::__Interop__Error const _cordl_ENOPROTOOPT;

  /// @brief Field ENOSPC value: static_cast<int32_t>(0x10034)
  static ::GlobalNamespace::__Interop__Error const _cordl_ENOSPC;

  /// @brief Field ENOSYS value: static_cast<int32_t>(0x10037)
  static ::GlobalNamespace::__Interop__Error const _cordl_ENOSYS;

  /// @brief Field ENOTCONN value: static_cast<int32_t>(0x10038)
  static ::GlobalNamespace::__Interop__Error const _cordl_ENOTCONN;

  /// @brief Field ENOTDIR value: static_cast<int32_t>(0x10039)
  static ::GlobalNamespace::__Interop__Error const _cordl_ENOTDIR;

  /// @brief Field ENOTEMPTY value: static_cast<int32_t>(0x1003a)
  static ::GlobalNamespace::__Interop__Error const _cordl_ENOTEMPTY;

  /// @brief Field ENOTSOCK value: static_cast<int32_t>(0x1003c)
  static ::GlobalNamespace::__Interop__Error const _cordl_ENOTSOCK;

  /// @brief Field ENOTSUP value: static_cast<int32_t>(0x1003d)
  static ::GlobalNamespace::__Interop__Error const _cordl_ENOTSUP;

  /// @brief Field ENOTTY value: static_cast<int32_t>(0x1003e)
  static ::GlobalNamespace::__Interop__Error const _cordl_ENOTTY;

  /// @brief Field ENXIO value: static_cast<int32_t>(0x1003f)
  static ::GlobalNamespace::__Interop__Error const _cordl_ENXIO;

  /// @brief Field EOPNOTSUPP value: static_cast<int32_t>(0x1003d)
  static ::GlobalNamespace::__Interop__Error const _cordl_EOPNOTSUPP;

  /// @brief Field EOVERFLOW value: static_cast<int32_t>(0x10040)
  static ::GlobalNamespace::__Interop__Error const _cordl_EOVERFLOW;

  /// @brief Field EPERM value: static_cast<int32_t>(0x10042)
  static ::GlobalNamespace::__Interop__Error const _cordl_EPERM;

  /// @brief Field EPFNOSUPPORT value: static_cast<int32_t>(0x10060)
  static ::GlobalNamespace::__Interop__Error const _cordl_EPFNOSUPPORT;

  /// @brief Field EPIPE value: static_cast<int32_t>(0x10043)
  static ::GlobalNamespace::__Interop__Error const _cordl_EPIPE;

  /// @brief Field EPROTO value: static_cast<int32_t>(0x10044)
  static ::GlobalNamespace::__Interop__Error const _cordl_EPROTO;

  /// @brief Field EPROTONOSUPPORT value: static_cast<int32_t>(0x10045)
  static ::GlobalNamespace::__Interop__Error const _cordl_EPROTONOSUPPORT;

  /// @brief Field EPROTOTYPE value: static_cast<int32_t>(0x10046)
  static ::GlobalNamespace::__Interop__Error const _cordl_EPROTOTYPE;

  /// @brief Field ERANGE value: static_cast<int32_t>(0x10047)
  static ::GlobalNamespace::__Interop__Error const _cordl_ERANGE;

  /// @brief Field EROFS value: static_cast<int32_t>(0x10048)
  static ::GlobalNamespace::__Interop__Error const _cordl_EROFS;

  /// @brief Field ESHUTDOWN value: static_cast<int32_t>(0x1006c)
  static ::GlobalNamespace::__Interop__Error const _cordl_ESHUTDOWN;

  /// @brief Field ESOCKTNOSUPPORT value: static_cast<int32_t>(0x1005e)
  static ::GlobalNamespace::__Interop__Error const _cordl_ESOCKTNOSUPPORT;

  /// @brief Field ESPIPE value: static_cast<int32_t>(0x10049)
  static ::GlobalNamespace::__Interop__Error const _cordl_ESPIPE;

  /// @brief Field ESRCH value: static_cast<int32_t>(0x1004a)
  static ::GlobalNamespace::__Interop__Error const _cordl_ESRCH;

  /// @brief Field ESTALE value: static_cast<int32_t>(0x1004b)
  static ::GlobalNamespace::__Interop__Error const _cordl_ESTALE;

  /// @brief Field ETIMEDOUT value: static_cast<int32_t>(0x1004d)
  static ::GlobalNamespace::__Interop__Error const _cordl_ETIMEDOUT;

  /// @brief Field ETXTBSY value: static_cast<int32_t>(0x1004e)
  static ::GlobalNamespace::__Interop__Error const _cordl_ETXTBSY;

  /// @brief Field EWOULDBLOCK value: static_cast<int32_t>(0x10006)
  static ::GlobalNamespace::__Interop__Error const _cordl_EWOULDBLOCK;

  /// @brief Field EXDEV value: static_cast<int32_t>(0x1004f)
  static ::GlobalNamespace::__Interop__Error const _cordl_EXDEV;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__Interop__Error, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__Interop__Error, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ErrorInfo
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::Interop::ErrorInfo
struct CORDL_TYPE __Interop__ErrorInfo {
public:
  // Declarations
  __declspec(property(get = get_Error))::GlobalNamespace::__Interop__Error Error;

  __declspec(property(get = get_RawErrno)) int32_t RawErrno;

  /// @brief Method GetErrorMessage, addr 0x27a87e4, size 0x64, virtual false, abstract: false, final false
  inline ::StringW GetErrorMessage();

  /// @brief Method ToString, addr 0x27a8aa8, size 0xd4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x27a88b0, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(int32_t _cordl_errno);

  /// @brief Method .ctor, addr 0x27a891c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__Interop__Error error);

  /// @brief Method get_Error, addr 0x27a8928, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__Interop__Error get_Error();

  /// @brief Method get_RawErrno, addr 0x27a8778, size 0x6c, virtual false, abstract: false, final false
  inline int32_t get_RawErrno();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Interop__ErrorInfo();

  // Ctor Parameters [CppParam { name: "_error", ty: "::GlobalNamespace::__Interop__Error", modifiers: "", def_value: None }, CppParam { name: "_rawErrno", ty: "int32_t", modifiers: "", def_value:
  // None }]
  constexpr __Interop__ErrorInfo(::GlobalNamespace::__Interop__Error _error, int32_t _rawErrno) noexcept;

  /// @brief Field _error, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::__Interop__Error _error;

  /// @brief Field _rawErrno, offset: 0x4, size: 0x4, def value: None
  int32_t _rawErrno;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__Interop__ErrorInfo, 0x8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__Interop__ErrorInfo, _error) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__Interop__ErrorInfo, _rawErrno) == 0x4, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::NodeType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::Interop::Sys::NodeType
struct CORDL_TYPE __Interop__Sys__NodeType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Interop__Sys__NodeType_Unwrapped
  enum struct ____Interop__Sys__NodeType_Unwrapped : int32_t {
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
  constexpr operator ____Interop__Sys__NodeType_Unwrapped() const noexcept {
    return static_cast<____Interop__Sys__NodeType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Interop__Sys__NodeType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Interop__Sys__NodeType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field DT_BLK value: static_cast<int32_t>(0x6)
  static ::GlobalNamespace::__Interop__Sys__NodeType const DT_BLK;

  /// @brief Field DT_CHR value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__Interop__Sys__NodeType const DT_CHR;

  /// @brief Field DT_DIR value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__Interop__Sys__NodeType const DT_DIR;

  /// @brief Field DT_FIFO value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__Interop__Sys__NodeType const DT_FIFO;

  /// @brief Field DT_LNK value: static_cast<int32_t>(0xa)
  static ::GlobalNamespace::__Interop__Sys__NodeType const DT_LNK;

  /// @brief Field DT_REG value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__Interop__Sys__NodeType const DT_REG;

  /// @brief Field DT_SOCK value: static_cast<int32_t>(0xc)
  static ::GlobalNamespace::__Interop__Sys__NodeType const DT_SOCK;

  /// @brief Field DT_UNKNOWN value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__Interop__Sys__NodeType const DT_UNKNOWN;

  /// @brief Field DT_WHT value: static_cast<int32_t>(0xe)
  static ::GlobalNamespace::__Interop__Sys__NodeType const DT_WHT;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__Interop__Sys__NodeType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__Interop__Sys__NodeType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::DirectoryEntry
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::Interop::Sys::DirectoryEntry
struct CORDL_TYPE __Interop__Sys__DirectoryEntry {
public:
  // Declarations
  /// @brief Method GetName, addr 0x27a94b8, size 0x164, virtual false, abstract: false, final false
  inline ::System::ReadOnlySpan_1<char16_t> GetName(::System::Span_1<char16_t> buffer);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Interop__Sys__DirectoryEntry();

  // Ctor Parameters [CppParam { name: "Name", ty: "::cordl_internals::Ptr<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "NameLength", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "InodeType", ty: "::GlobalNamespace::__Interop__Sys__NodeType", modifiers: "", def_value: None }]
  constexpr __Interop__Sys__DirectoryEntry(::cordl_internals::Ptr<uint8_t> Name, int32_t NameLength, ::GlobalNamespace::__Interop__Sys__NodeType InodeType) noexcept;

  /// @brief Field Name, offset: 0x0, size: 0x8, def value: None
  ::cordl_internals::Ptr<uint8_t> Name;

  /// @brief Field NameLength, offset: 0x8, size: 0x4, def value: None
  int32_t NameLength;

  /// @brief Field InodeType, offset: 0xc, size: 0x4, def value: None
  ::GlobalNamespace::__Interop__Sys__NodeType InodeType;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__Interop__Sys__DirectoryEntry, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__Interop__Sys__DirectoryEntry, Name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__Interop__Sys__DirectoryEntry, NameLength) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__Interop__Sys__DirectoryEntry, InodeType) == 0xc, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::FileStatusFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::Interop::Sys::FileStatusFlags
struct CORDL_TYPE __Interop__Sys__FileStatusFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Interop__Sys__FileStatusFlags_Unwrapped
  enum struct ____Interop__Sys__FileStatusFlags_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_HasBirthTime = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Interop__Sys__FileStatusFlags_Unwrapped() const noexcept {
    return static_cast<____Interop__Sys__FileStatusFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Interop__Sys__FileStatusFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Interop__Sys__FileStatusFlags(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field HasBirthTime value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__Interop__Sys__FileStatusFlags const HasBirthTime;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__Interop__Sys__FileStatusFlags const None;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__Interop__Sys__FileStatusFlags, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__Interop__Sys__FileStatusFlags, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::FileStatus
// SizeInfo { instance_size: 112, native_size: 112, calculated_instance_size: 112, calculated_native_size: 124, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::Interop::Sys::FileStatus
struct CORDL_TYPE __Interop__Sys__FileStatus {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Interop__Sys__FileStatus();

  // Ctor Parameters [CppParam { name: "Flags", ty: "::GlobalNamespace::__Interop__Sys__FileStatusFlags", modifiers: "", def_value: None }, CppParam { name: "Mode", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "Uid", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "Gid", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "Size", ty:
  // "int64_t", modifiers: "", def_value: None }, CppParam { name: "ATime", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "ATimeNsec", ty: "int64_t", modifiers: "", def_value: None
  // }, CppParam { name: "MTime", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "MTimeNsec", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "CTime", ty:
  // "int64_t", modifiers: "", def_value: None }, CppParam { name: "CTimeNsec", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "BirthTime", ty: "int64_t", modifiers: "", def_value:
  // None }, CppParam { name: "BirthTimeNsec", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "Dev", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "Ino", ty:
  // "int64_t", modifiers: "", def_value: None }, CppParam { name: "UserFlags", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr __Interop__Sys__FileStatus(::GlobalNamespace::__Interop__Sys__FileStatusFlags Flags, int32_t Mode, uint32_t Uid, uint32_t Gid, int64_t Size, int64_t ATime, int64_t ATimeNsec,
                                       int64_t MTime, int64_t MTimeNsec, int64_t CTime, int64_t CTimeNsec, int64_t BirthTime, int64_t BirthTimeNsec, int64_t Dev, int64_t Ino,
                                       uint32_t UserFlags) noexcept;

  /// @brief Field Flags, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::__Interop__Sys__FileStatusFlags Flags;

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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x70 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__Interop__Sys__FileStatus, 0x70>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__Interop__Sys__FileStatus, Flags) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__Interop__Sys__FileStatus, Mode) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__Interop__Sys__FileStatus, Uid) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__Interop__Sys__FileStatus, Gid) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__Interop__Sys__FileStatus, Size) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__Interop__Sys__FileStatus, ATime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__Interop__Sys__FileStatus, ATimeNsec) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__Interop__Sys__FileStatus, MTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__Interop__Sys__FileStatus, MTimeNsec) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__Interop__Sys__FileStatus, CTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__Interop__Sys__FileStatus, CTimeNsec) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__Interop__Sys__FileStatus, BirthTime) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__Interop__Sys__FileStatus, BirthTimeNsec) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__Interop__Sys__FileStatus, Dev) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__Interop__Sys__FileStatus, Ino) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__Interop__Sys__FileStatus, UserFlags) == 0x68, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Permissions
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::Interop::Sys::Permissions
struct CORDL_TYPE __Interop__Sys__Permissions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Interop__Sys__Permissions_Unwrapped
  enum struct ____Interop__Sys__Permissions_Unwrapped : int32_t {
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
  constexpr operator ____Interop__Sys__Permissions_Unwrapped() const noexcept {
    return static_cast<____Interop__Sys__Permissions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Interop__Sys__Permissions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Interop__Sys__Permissions(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Mask value: static_cast<int32_t>(0x1ff)
  static ::GlobalNamespace::__Interop__Sys__Permissions const Mask;

  /// @brief Field S_IRGRP value: static_cast<int32_t>(0x20)
  static ::GlobalNamespace::__Interop__Sys__Permissions const S_IRGRP;

  /// @brief Field S_IROTH value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__Interop__Sys__Permissions const S_IROTH;

  /// @brief Field S_IRUSR value: static_cast<int32_t>(0x100)
  static ::GlobalNamespace::__Interop__Sys__Permissions const S_IRUSR;

  /// @brief Field S_IRWXG value: static_cast<int32_t>(0x38)
  static ::GlobalNamespace::__Interop__Sys__Permissions const S_IRWXG;

  /// @brief Field S_IRWXO value: static_cast<int32_t>(0x7)
  static ::GlobalNamespace::__Interop__Sys__Permissions const S_IRWXO;

  /// @brief Field S_IRWXU value: static_cast<int32_t>(0x1c0)
  static ::GlobalNamespace::__Interop__Sys__Permissions const S_IRWXU;

  /// @brief Field S_IWGRP value: static_cast<int32_t>(0x10)
  static ::GlobalNamespace::__Interop__Sys__Permissions const S_IWGRP;

  /// @brief Field S_IWOTH value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__Interop__Sys__Permissions const S_IWOTH;

  /// @brief Field S_IWUSR value: static_cast<int32_t>(0x80)
  static ::GlobalNamespace::__Interop__Sys__Permissions const S_IWUSR;

  /// @brief Field S_IXGRP value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__Interop__Sys__Permissions const S_IXGRP;

  /// @brief Field S_IXOTH value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__Interop__Sys__Permissions const S_IXOTH;

  /// @brief Field S_IXUSR value: static_cast<int32_t>(0x40)
  static ::GlobalNamespace::__Interop__Sys__Permissions const S_IXUSR;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__Interop__Sys__Permissions, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__Interop__Sys__Permissions, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Sys
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::Interop::Sys*
class CORDL_TYPE __Interop__Sys : public ::System::Object {
public:
  // Declarations
  using DirectoryEntry = ::GlobalNamespace::__Interop__Sys__DirectoryEntry;

  using FileStatus = ::GlobalNamespace::__Interop__Sys__FileStatus;

  using FileStatusFlags = ::GlobalNamespace::__Interop__Sys__FileStatusFlags;

  using NodeType = ::GlobalNamespace::__Interop__Sys__NodeType;

  using Permissions = ::GlobalNamespace::__Interop__Sys__Permissions;

  /// @brief Field CanSetHiddenFlag, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_CanSetHiddenFlag, put = setStaticF_CanSetHiddenFlag)) bool CanSetHiddenFlag;

  /// @brief Method CloseDir, addr 0x27a8bbc, size 0x1c, virtual false, abstract: false, final false
  static inline int32_t CloseDir(::System::IntPtr dir);

  /// @brief Method ConvertErrorPalToPlatform, addr 0x27a8930, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t ConvertErrorPalToPlatform(::GlobalNamespace::__Interop__Error error);

  /// @brief Method ConvertErrorPlatformToPal, addr 0x27a8918, size 0x4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__Interop__Error ConvertErrorPlatformToPal(int32_t platformErrno);

  /// @brief Method CopyFile, addr 0x27a8f6c, size 0xb4, virtual false, abstract: false, final false
  static inline int32_t CopyFile(::Microsoft::Win32::SafeHandles::SafeFileHandle* source, ::Microsoft::Win32::SafeHandles::SafeFileHandle* destination);

  /// @brief Method DoubleToString, addr 0x27a9460, size 0x4, virtual false, abstract: false, final false
  static inline int32_t DoubleToString(double_t value, ::cordl_internals::Ptr<uint8_t> format, ::cordl_internals::Ptr<uint8_t> buffer, int32_t bufferLength);

  /// @brief Method GetEGid, addr 0x27a9020, size 0x4, virtual false, abstract: false, final false
  static inline uint32_t GetEGid();

  /// @brief Method GetEUid, addr 0x27a9024, size 0x4, virtual false, abstract: false, final false
  static inline uint32_t GetEUid();

  /// @brief Method GetLastErrorInfo, addr 0x27a85f4, size 0x68, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__Interop__ErrorInfo GetLastErrorInfo();

  /// @brief Method GetNonCryptographicallySecureRandomBytes, addr 0x27a88ac, size 0x4, virtual false, abstract: false, final false
  static inline void GetNonCryptographicallySecureRandomBytes(::cordl_internals::Ptr<uint8_t> buffer, int32_t length);

  /// @brief Method GetReadDirRBufferSize, addr 0x27a8bb4, size 0x4, virtual false, abstract: false, final false
  static inline int32_t GetReadDirRBufferSize();

  /// @brief Method LChflagsCanSetHiddenFlag, addr 0x27a9028, size 0x4, virtual false, abstract: false, final false
  static inline int32_t LChflagsCanSetHiddenFlag();

  /// @brief Method LStat, addr 0x27a8e78, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t LStat(::StringW path, ByRef<::GlobalNamespace::__Interop__Sys__FileStatus> output);

  /// @brief Method LStat, addr 0x27a92d4, size 0x158, virtual false, abstract: false, final false
  static inline int32_t LStat(::System::ReadOnlySpan_1<char16_t> path, ByRef<::GlobalNamespace::__Interop__Sys__FileStatus> output);

  /// @brief Method LStat, addr 0x27a92b8, size 0x1c, virtual false, abstract: false, final false
  static inline int32_t LStat(ByRef<uint8_t> path, ByRef<::GlobalNamespace::__Interop__Sys__FileStatus> output);

  /// @brief Method Link, addr 0x27a902c, size 0x54, virtual false, abstract: false, final false
  static inline int32_t Link(::StringW source, ::StringW link);

  /// @brief Method MkDir, addr 0x27a9080, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t MkDir(::StringW path, int32_t mode);

  /// @brief Method OpenDir, addr 0x27a8b80, size 0x34, virtual false, abstract: false, final false
  static inline ::System::IntPtr OpenDir(::StringW path);

  /// @brief Method ReadDirR, addr 0x27a8bb8, size 0x4, virtual false, abstract: false, final false
  static inline int32_t ReadDirR(::System::IntPtr dir, ::cordl_internals::Ptr<uint8_t> buffer, int32_t bufferSize, ByRef<::GlobalNamespace::__Interop__Sys__DirectoryEntry> outputEntry);

  /// @brief Method ReadLink, addr 0x27a8c24, size 0x218, virtual false, abstract: false, final false
  static inline ::StringW ReadLink(::StringW path);

  /// @brief Method ReadLink, addr 0x27a8bd8, size 0x4c, virtual false, abstract: false, final false
  static inline int32_t ReadLink(::StringW path, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t bufferSize);

  /// @brief Method Rename, addr 0x27a90bc, size 0x54, virtual false, abstract: false, final false
  static inline int32_t Rename(::StringW oldPath, ::StringW newPath);

  /// @brief Method RmDir, addr 0x27a9110, size 0x34, virtual false, abstract: false, final false
  static inline int32_t RmDir(::StringW path);

  /// @brief Method Stat, addr 0x27a8e3c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t Stat(::StringW path, ByRef<::GlobalNamespace::__Interop__Sys__FileStatus> output);

  /// @brief Method Stat, addr 0x27a9160, size 0x158, virtual false, abstract: false, final false
  static inline int32_t Stat(::System::ReadOnlySpan_1<char16_t> path, ByRef<::GlobalNamespace::__Interop__Sys__FileStatus> output);

  /// @brief Method Stat, addr 0x27a9144, size 0x1c, virtual false, abstract: false, final false
  static inline int32_t Stat(ByRef<uint8_t> path, ByRef<::GlobalNamespace::__Interop__Sys__FileStatus> output);

  /// @brief Method StrError, addr 0x27a89ac, size 0xfc, virtual false, abstract: false, final false
  static inline ::StringW StrError(int32_t platformErrno);

  /// @brief Method StrErrorR, addr 0x27a8b7c, size 0x4, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<uint8_t> StrErrorR(int32_t platformErrno, ::cordl_internals::Ptr<uint8_t> buffer, int32_t bufferSize);

  /// @brief Method Symlink, addr 0x27a8eb4, size 0xb8, virtual false, abstract: false, final false
  static inline int32_t Symlink(::StringW target, ::StringW linkPath);

  /// @brief Method Unlink, addr 0x27a942c, size 0x34, virtual false, abstract: false, final false
  static inline int32_t Unlink(::StringW pathname);

  static inline bool getStaticF_CanSetHiddenFlag();

  static inline void setStaticF_CanSetHiddenFlag(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Interop__Sys();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Interop__Sys", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Interop__Sys(__Interop__Sys&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Interop__Sys", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Interop__Sys(__Interop__Sys const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__Interop__Sys, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Interop
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::Interop*
class CORDL_TYPE Interop : public ::System::Object {
public:
  // Declarations
  using Error = ::GlobalNamespace::__Interop__Error;

  using ErrorInfo = ::GlobalNamespace::__Interop__ErrorInfo;

  using Sys = ::GlobalNamespace::__Interop__Sys;

  /// @brief Method CheckIo, addr 0x27a865c, size 0x20, virtual false, abstract: false, final false
  static inline int32_t CheckIo(int32_t result, ::StringW path, bool isDirectory, ::System::Func_2<::GlobalNamespace::__Interop__ErrorInfo, ::GlobalNamespace::__Interop__ErrorInfo>* errorRewriter);

  /// @brief Method CheckIo, addr 0x27a857c, size 0x78, virtual false, abstract: false, final false
  static inline int64_t CheckIo(int64_t result, ::StringW path, bool isDirectory, ::System::Func_2<::GlobalNamespace::__Interop__ErrorInfo, ::GlobalNamespace::__Interop__ErrorInfo>* errorRewriter);

  /// @brief Method GetExceptionForIoErrno, addr 0x27a8084, size 0x4f8, virtual false, abstract: false, final false
  static inline ::System::Exception* GetExceptionForIoErrno(::GlobalNamespace::__Interop__ErrorInfo errorInfo, ::StringW path, bool isDirectory);

  /// @brief Method GetIOException, addr 0x27a86ec, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* GetIOException(::GlobalNamespace::__Interop__ErrorInfo errorInfo);

  /// @brief Method GetRandomBytes, addr 0x27a8848, size 0x64, virtual false, abstract: false, final false
  static inline void GetRandomBytes(::cordl_internals::Ptr<uint8_t> buffer, int32_t length);

  /// @brief Method ThrowExceptionForIoErrno, addr 0x27a802c, size 0x58, virtual false, abstract: false, final false
  static inline void ThrowExceptionForIoErrno(::GlobalNamespace::__Interop__ErrorInfo errorInfo, ::StringW path, bool isDirectory,
                                              ::System::Func_2<::GlobalNamespace::__Interop__ErrorInfo, ::GlobalNamespace::__Interop__ErrorInfo>* errorRewriter);

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Interop, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__Interop__Error, "", "Interop/Error");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__Interop__Sys__FileStatusFlags, "", "Interop/Sys/FileStatusFlags");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__Interop__Sys__NodeType, "", "Interop/Sys/NodeType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__Interop__Sys__Permissions, "", "Interop/Sys/Permissions");
NEED_NO_BOX(::GlobalNamespace::Interop);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Interop*, "", "Interop");
NEED_NO_BOX(::GlobalNamespace::__Interop__Sys);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__Interop__Sys*, "", "Interop/Sys");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__Interop__ErrorInfo, "", "Interop/ErrorInfo");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__Interop__Sys__DirectoryEntry, "", "Interop/Sys/DirectoryEntry");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__Interop__Sys__FileStatus, "", "Interop/Sys/FileStatus");
