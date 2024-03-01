#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeStructs)
namespace Mono {
struct __RuntimeStructs__GPtrArray;
}
namespace Mono {
struct __RuntimeStructs__GenericParamInfo;
}
namespace Mono {
struct __RuntimeStructs__MonoClass;
}
namespace Mono {
struct __RuntimeStructs__RemoteClass;
}
// Forward declare root types
namespace Mono {
class RuntimeStructs;
}
namespace Mono {
struct __RuntimeStructs__GPtrArray;
}
namespace Mono {
struct __RuntimeStructs__GenericParamInfo;
}
namespace Mono {
struct __RuntimeStructs__MonoClass;
}
namespace Mono {
struct __RuntimeStructs__RemoteClass;
}
// Write type traits
MARK_REF_PTR_T(::Mono::RuntimeStructs);
MARK_VAL_T(::Mono::__RuntimeStructs__GPtrArray);
MARK_VAL_T(::Mono::__RuntimeStructs__GenericParamInfo);
MARK_VAL_T(::Mono::__RuntimeStructs__MonoClass);
MARK_VAL_T(::Mono::__RuntimeStructs__RemoteClass);
// Type: ::RemoteClass
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono {
// Is value type: true
// CS Name: ::RuntimeStructs::RemoteClass
struct CORDL_TYPE __RuntimeStructs__RemoteClass {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RuntimeStructs__RemoteClass();

  // Ctor Parameters [CppParam { name: "default_vtable", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "xdomain_vtable", ty: "void*", modifiers: "", def_value: None }, CppParam {
  // name: "proxy_class", ty: "::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>", modifiers: "", def_value: None }, CppParam { name: "proxy_class_name", ty: "void*", modifiers: "",
  // def_value: None }, CppParam { name: "interface_count", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr __RuntimeStructs__RemoteClass(void* default_vtable, void* xdomain_vtable, ::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass> proxy_class, void* proxy_class_name,
                                          uint32_t interface_count) noexcept;

  /// @brief Field default_vtable, offset: 0x0, size: 0x8, def value: None
  void* default_vtable;

  /// @brief Field xdomain_vtable, offset: 0x8, size: 0x8, def value: None
  void* xdomain_vtable;

  /// @brief Field proxy_class, offset: 0x10, size: 0x8, def value: None
  ::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass> proxy_class;

  /// @brief Field proxy_class_name, offset: 0x18, size: 0x8, def value: None
  void* proxy_class_name;

  /// @brief Field interface_count, offset: 0x20, size: 0x4, def value: None
  uint32_t interface_count;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::__RuntimeStructs__RemoteClass, 0x28>, "Size mismatch!");

static_assert(offsetof(::Mono::__RuntimeStructs__RemoteClass, default_vtable) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mono::__RuntimeStructs__RemoteClass, xdomain_vtable) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Mono::__RuntimeStructs__RemoteClass, proxy_class) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::__RuntimeStructs__RemoteClass, proxy_class_name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::__RuntimeStructs__RemoteClass, interface_count) == 0x20, "Offset mismatch!");

} // namespace Mono
// Type: ::MonoClass
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace Mono {
// Is value type: true
// CS Name: ::RuntimeStructs::MonoClass
#pragma pack(push, 0)
struct CORDL_TYPE __RuntimeStructs__MonoClass {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RuntimeStructs__MonoClass();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::__RuntimeStructs__MonoClass, 0x1>, "Size mismatch!");

} // namespace Mono
// Type: ::GenericParamInfo
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono {
// Is value type: true
// CS Name: ::RuntimeStructs::GenericParamInfo
struct CORDL_TYPE __RuntimeStructs__GenericParamInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RuntimeStructs__GenericParamInfo();

  // Ctor Parameters [CppParam { name: "pklass", ty: "::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>", modifiers: "", def_value: None }, CppParam { name: "name", ty: "void*", modifiers:
  // "", def_value: None }, CppParam { name: "flags", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "token", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "constraints", ty: "::cordl_internals::Ptr<::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>>", modifiers: "", def_value: None }]
  constexpr __RuntimeStructs__GenericParamInfo(::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass> pklass, void* name, uint16_t flags, uint32_t token,
                                               ::cordl_internals::Ptr<::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>> constraints) noexcept;

  /// @brief Field pklass, offset: 0x0, size: 0x8, def value: None
  ::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass> pklass;

  /// @brief Field name, offset: 0x8, size: 0x8, def value: None
  void* name;

  /// @brief Field flags, offset: 0x10, size: 0x2, def value: None
  uint16_t flags;

  /// @brief Field token, offset: 0x14, size: 0x4, def value: None
  uint32_t token;

  /// @brief Field constraints, offset: 0x18, size: 0x8, def value: None
  ::cordl_internals::Ptr<::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>> constraints;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::__RuntimeStructs__GenericParamInfo, 0x20>, "Size mismatch!");

static_assert(offsetof(::Mono::__RuntimeStructs__GenericParamInfo, pklass) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mono::__RuntimeStructs__GenericParamInfo, name) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Mono::__RuntimeStructs__GenericParamInfo, flags) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::__RuntimeStructs__GenericParamInfo, token) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Mono::__RuntimeStructs__GenericParamInfo, constraints) == 0x18, "Offset mismatch!");

} // namespace Mono
// Type: ::GPtrArray
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono {
// Is value type: true
// CS Name: ::RuntimeStructs::GPtrArray
struct CORDL_TYPE __RuntimeStructs__GPtrArray {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RuntimeStructs__GPtrArray();

  // Ctor Parameters [CppParam { name: "data", ty: "::cordl_internals::Ptr<void*>", modifiers: "", def_value: None }, CppParam { name: "len", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __RuntimeStructs__GPtrArray(::cordl_internals::Ptr<void*> data, int32_t len) noexcept;

  /// @brief Field data, offset: 0x0, size: 0x8, def value: None
  ::cordl_internals::Ptr<void*> data;

  /// @brief Field len, offset: 0x8, size: 0x4, def value: None
  int32_t len;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::__RuntimeStructs__GPtrArray, 0x10>, "Size mismatch!");

static_assert(offsetof(::Mono::__RuntimeStructs__GPtrArray, data) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mono::__RuntimeStructs__GPtrArray, len) == 0x8, "Offset mismatch!");

} // namespace Mono
// Type: Mono::RuntimeStructs
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Mono {
// Is value type: false
// CS Name: ::Mono::RuntimeStructs*
class CORDL_TYPE RuntimeStructs : public ::System::Object {
public:
  // Declarations
  using GPtrArray = ::Mono::__RuntimeStructs__GPtrArray;

  using GenericParamInfo = ::Mono::__RuntimeStructs__GenericParamInfo;

  using MonoClass = ::Mono::__RuntimeStructs__MonoClass;

  using RemoteClass = ::Mono::__RuntimeStructs__RemoteClass;

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::RuntimeStructs, 0x10>, "Size mismatch!");

} // namespace Mono
NEED_NO_BOX(::Mono::RuntimeStructs);
DEFINE_IL2CPP_ARG_TYPE(::Mono::RuntimeStructs*, "Mono", "RuntimeStructs");
DEFINE_IL2CPP_ARG_TYPE(::Mono::__RuntimeStructs__GPtrArray, "Mono", "RuntimeStructs/GPtrArray");
DEFINE_IL2CPP_ARG_TYPE(::Mono::__RuntimeStructs__GenericParamInfo, "Mono", "RuntimeStructs/GenericParamInfo");
DEFINE_IL2CPP_ARG_TYPE(::Mono::__RuntimeStructs__MonoClass, "Mono", "RuntimeStructs/MonoClass");
DEFINE_IL2CPP_ARG_TYPE(::Mono::__RuntimeStructs__RemoteClass, "Mono", "RuntimeStructs/RemoteClass");
