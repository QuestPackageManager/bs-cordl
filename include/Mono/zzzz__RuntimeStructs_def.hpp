#pragma once
// IWYU pragma private; include "Mono/RuntimeStructs.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeStructs)
namespace Mono {
struct RuntimeStructs_GPtrArray;
}
namespace Mono {
struct RuntimeStructs_GenericParamInfo;
}
namespace Mono {
struct RuntimeStructs_MonoClass;
}
namespace Mono {
struct RuntimeStructs_RemoteClass;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Mono {
class RuntimeStructs;
}
namespace Mono {
struct RuntimeStructs_GPtrArray;
}
namespace Mono {
struct RuntimeStructs_GenericParamInfo;
}
namespace Mono {
struct RuntimeStructs_MonoClass;
}
namespace Mono {
struct RuntimeStructs_RemoteClass;
}
// Write type traits
MARK_REF_PTR_T(::Mono::RuntimeStructs);
MARK_VAL_T(::Mono::RuntimeStructs_GPtrArray);
MARK_VAL_T(::Mono::RuntimeStructs_GenericParamInfo);
MARK_VAL_T(::Mono::RuntimeStructs_MonoClass);
MARK_VAL_T(::Mono::RuntimeStructs_RemoteClass);
// Dependencies System.IntPtr
namespace Mono {
// Is value type: true
// CS Name: Mono.RuntimeStructs/RemoteClass
struct CORDL_TYPE RuntimeStructs_RemoteClass {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeStructs_RemoteClass();

  // Ctor Parameters [CppParam { name: "default_vtable", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "xdomain_vtable", ty: "::System::IntPtr", modifiers: "", def_value:
  // None }, CppParam { name: "proxy_class", ty: "::cordl_internals::Ptr<::Mono::RuntimeStructs_MonoClass>", modifiers: "", def_value: None }, CppParam { name: "proxy_class_name", ty:
  // "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "interface_count", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr RuntimeStructs_RemoteClass(::System::IntPtr default_vtable, ::System::IntPtr xdomain_vtable, ::cordl_internals::Ptr<::Mono::RuntimeStructs_MonoClass> proxy_class,
                                       ::System::IntPtr proxy_class_name, uint32_t interface_count) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2235 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field default_vtable, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr default_vtable;

  /// @brief Field xdomain_vtable, offset: 0x8, size: 0x8, def value: None
  ::System::IntPtr xdomain_vtable;

  /// @brief Field proxy_class, offset: 0x10, size: 0x8, def value: None
  ::cordl_internals::Ptr<::Mono::RuntimeStructs_MonoClass> proxy_class;

  /// @brief Field proxy_class_name, offset: 0x18, size: 0x8, def value: None
  ::System::IntPtr proxy_class_name;

  /// @brief Field interface_count, offset: 0x20, size: 0x4, def value: None
  uint32_t interface_count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mono::RuntimeStructs_RemoteClass, default_vtable) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mono::RuntimeStructs_RemoteClass, xdomain_vtable) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Mono::RuntimeStructs_RemoteClass, proxy_class) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::RuntimeStructs_RemoteClass, proxy_class_name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::RuntimeStructs_RemoteClass, interface_count) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::RuntimeStructs_RemoteClass, 0x28>, "Size mismatch!");

} // namespace Mono
// Dependencies
namespace Mono {
// Is value type: true
// CS Name: Mono.RuntimeStructs/MonoClass
#pragma pack(push, 0)
struct CORDL_TYPE RuntimeStructs_MonoClass {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeStructs_MonoClass();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2236 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::RuntimeStructs_MonoClass, 0x1>, "Size mismatch!");

} // namespace Mono
// Dependencies System.IntPtr
namespace Mono {
// Is value type: true
// CS Name: Mono.RuntimeStructs/GenericParamInfo
struct CORDL_TYPE RuntimeStructs_GenericParamInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeStructs_GenericParamInfo();

  // Ctor Parameters [CppParam { name: "pklass", ty: "::cordl_internals::Ptr<::Mono::RuntimeStructs_MonoClass>", modifiers: "", def_value: None }, CppParam { name: "name", ty: "::System::IntPtr",
  // modifiers: "", def_value: None }, CppParam { name: "flags", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "token", ty: "uint32_t", modifiers: "", def_value: None }, CppParam
  // { name: "constraints", ty: "::cordl_internals::Ptr<::cordl_internals::Ptr<::Mono::RuntimeStructs_MonoClass>>", modifiers: "", def_value: None }]
  constexpr RuntimeStructs_GenericParamInfo(::cordl_internals::Ptr<::Mono::RuntimeStructs_MonoClass> pklass, ::System::IntPtr name, uint16_t flags, uint32_t token,
                                            ::cordl_internals::Ptr<::cordl_internals::Ptr<::Mono::RuntimeStructs_MonoClass>> constraints) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2237 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field pklass, offset: 0x0, size: 0x8, def value: None
  ::cordl_internals::Ptr<::Mono::RuntimeStructs_MonoClass> pklass;

  /// @brief Field name, offset: 0x8, size: 0x8, def value: None
  ::System::IntPtr name;

  /// @brief Field flags, offset: 0x10, size: 0x2, def value: None
  uint16_t flags;

  /// @brief Field token, offset: 0x14, size: 0x4, def value: None
  uint32_t token;

  /// @brief Field constraints, offset: 0x18, size: 0x8, def value: None
  ::cordl_internals::Ptr<::cordl_internals::Ptr<::Mono::RuntimeStructs_MonoClass>> constraints;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mono::RuntimeStructs_GenericParamInfo, pklass) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mono::RuntimeStructs_GenericParamInfo, name) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Mono::RuntimeStructs_GenericParamInfo, flags) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::RuntimeStructs_GenericParamInfo, token) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Mono::RuntimeStructs_GenericParamInfo, constraints) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::RuntimeStructs_GenericParamInfo, 0x20>, "Size mismatch!");

} // namespace Mono
// Dependencies
namespace Mono {
// Is value type: true
// CS Name: Mono.RuntimeStructs/GPtrArray
struct CORDL_TYPE RuntimeStructs_GPtrArray {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeStructs_GPtrArray();

  // Ctor Parameters [CppParam { name: "data", ty: "::cordl_internals::Ptr<::System::IntPtr>", modifiers: "", def_value: None }, CppParam { name: "len", ty: "int32_t", modifiers: "", def_value: None
  // }]
  constexpr RuntimeStructs_GPtrArray(::cordl_internals::Ptr<::System::IntPtr> data, int32_t len) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2238 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field data, offset: 0x0, size: 0x8, def value: None
  ::cordl_internals::Ptr<::System::IntPtr> data;

  /// @brief Field len, offset: 0x8, size: 0x4, def value: None
  int32_t len;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mono::RuntimeStructs_GPtrArray, data) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mono::RuntimeStructs_GPtrArray, len) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::RuntimeStructs_GPtrArray, 0x10>, "Size mismatch!");

} // namespace Mono
// Dependencies System.Object
namespace Mono {
// Is value type: false
// CS Name: Mono.RuntimeStructs
class CORDL_TYPE RuntimeStructs : public ::System::Object {
public:
  // Declarations
  using GPtrArray = ::Mono::RuntimeStructs_GPtrArray;

  using GenericParamInfo = ::Mono::RuntimeStructs_GenericParamInfo;

  using MonoClass = ::Mono::RuntimeStructs_MonoClass;

  using RemoteClass = ::Mono::RuntimeStructs_RemoteClass;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeStructs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RuntimeStructs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimeStructs(RuntimeStructs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeStructs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimeStructs(RuntimeStructs const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2239 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::RuntimeStructs, 0x10>, "Size mismatch!");

} // namespace Mono
NEED_NO_BOX(::Mono::RuntimeStructs);
DEFINE_IL2CPP_ARG_TYPE(::Mono::RuntimeStructs*, "Mono", "RuntimeStructs");
DEFINE_IL2CPP_ARG_TYPE(::Mono::RuntimeStructs_GPtrArray, "Mono", "RuntimeStructs/GPtrArray");
DEFINE_IL2CPP_ARG_TYPE(::Mono::RuntimeStructs_GenericParamInfo, "Mono", "RuntimeStructs/GenericParamInfo");
DEFINE_IL2CPP_ARG_TYPE(::Mono::RuntimeStructs_MonoClass, "Mono", "RuntimeStructs/MonoClass");
DEFINE_IL2CPP_ARG_TYPE(::Mono::RuntimeStructs_RemoteClass, "Mono", "RuntimeStructs/RemoteClass");
