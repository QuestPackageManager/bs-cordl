#pragma once
// IWYU pragma private; include "System/DelegateSerializationHolder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DelegateSerializationHolder)
namespace System::Runtime::Serialization {
class IObjectReference;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Delegate;
}
namespace System {
class Object;
}
namespace System {
class __DelegateSerializationHolder__DelegateEntry;
}
// Forward declare root types
namespace System {
class DelegateSerializationHolder;
}
namespace System {
class __DelegateSerializationHolder__DelegateEntry;
}
// Write type traits
MARK_REF_PTR_T(::System::DelegateSerializationHolder);
MARK_REF_PTR_T(::System::__DelegateSerializationHolder__DelegateEntry);
// Type: ::DelegateEntry
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::DelegateSerializationHolder::DelegateEntry*
class CORDL_TYPE __DelegateSerializationHolder__DelegateEntry : public ::System::Object {
public:
  // Declarations
  /// @brief Field assembly, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_assembly, put = __cordl_internal_set_assembly)) ::StringW assembly;

  /// @brief Field delegateEntry, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_delegateEntry, put = __cordl_internal_set_delegateEntry)) ::System::__DelegateSerializationHolder__DelegateEntry* delegateEntry;

  /// @brief Field methodName, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_methodName, put = __cordl_internal_set_methodName)) ::StringW methodName;

  /// @brief Field target, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_target, put = __cordl_internal_set_target)) ::System::Object* target;

  /// @brief Field targetTypeAssembly, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_targetTypeAssembly, put = __cordl_internal_set_targetTypeAssembly)) ::StringW targetTypeAssembly;

  /// @brief Field targetTypeName, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_targetTypeName, put = __cordl_internal_set_targetTypeName)) ::StringW targetTypeName;

  /// @brief Field type, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::StringW type;

  /// @brief Method DeserializeDelegate, addr 0x3dd4cc4, size 0x278, virtual false, abstract: false, final false
  inline ::System::Delegate* DeserializeDelegate(::System::Runtime::Serialization::SerializationInfo* info, int32_t index);

  static inline ::System::__DelegateSerializationHolder__DelegateEntry* New_ctor(::System::Delegate* del, ::StringW targetLabel);

  constexpr ::StringW const& __cordl_internal_get_assembly() const;

  constexpr ::StringW& __cordl_internal_get_assembly();

  constexpr ::System::__DelegateSerializationHolder__DelegateEntry*& __cordl_internal_get_delegateEntry();

  constexpr ::cordl_internals::to_const_pointer<::System::__DelegateSerializationHolder__DelegateEntry*> const& __cordl_internal_get_delegateEntry() const;

  constexpr ::StringW const& __cordl_internal_get_methodName() const;

  constexpr ::StringW& __cordl_internal_get_methodName();

  constexpr ::System::Object*& __cordl_internal_get_target();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_target() const;

  constexpr ::StringW const& __cordl_internal_get_targetTypeAssembly() const;

  constexpr ::StringW& __cordl_internal_get_targetTypeAssembly();

  constexpr ::StringW const& __cordl_internal_get_targetTypeName() const;

  constexpr ::StringW& __cordl_internal_get_targetTypeName();

  constexpr ::StringW const& __cordl_internal_get_type() const;

  constexpr ::StringW& __cordl_internal_get_type();

  constexpr void __cordl_internal_set_assembly(::StringW value);

  constexpr void __cordl_internal_set_delegateEntry(::System::__DelegateSerializationHolder__DelegateEntry* value);

  constexpr void __cordl_internal_set_methodName(::StringW value);

  constexpr void __cordl_internal_set_target(::System::Object* value);

  constexpr void __cordl_internal_set_targetTypeAssembly(::StringW value);

  constexpr void __cordl_internal_set_targetTypeName(::StringW value);

  constexpr void __cordl_internal_set_type(::StringW value);

  /// @brief Method .ctor, addr 0x3dd4f3c, size 0x11c, virtual false, abstract: false, final false
  inline void _ctor(::System::Delegate* del, ::StringW targetLabel);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DelegateSerializationHolder__DelegateEntry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DelegateSerializationHolder__DelegateEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DelegateSerializationHolder__DelegateEntry(__DelegateSerializationHolder__DelegateEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DelegateSerializationHolder__DelegateEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DelegateSerializationHolder__DelegateEntry(__DelegateSerializationHolder__DelegateEntry const&) = delete;

  /// @brief Field type, offset: 0x10, size: 0x8, def value: None
  ::StringW ___type;

  /// @brief Field assembly, offset: 0x18, size: 0x8, def value: None
  ::StringW ___assembly;

  /// @brief Field target, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ___target;

  /// @brief Field targetTypeAssembly, offset: 0x28, size: 0x8, def value: None
  ::StringW ___targetTypeAssembly;

  /// @brief Field targetTypeName, offset: 0x30, size: 0x8, def value: None
  ::StringW ___targetTypeName;

  /// @brief Field methodName, offset: 0x38, size: 0x8, def value: None
  ::StringW ___methodName;

  /// @brief Field delegateEntry, offset: 0x40, size: 0x8, def value: None
  ::System::__DelegateSerializationHolder__DelegateEntry* ___delegateEntry;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2592 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__DelegateSerializationHolder__DelegateEntry, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::__DelegateSerializationHolder__DelegateEntry, ___type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::__DelegateSerializationHolder__DelegateEntry, ___assembly) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::__DelegateSerializationHolder__DelegateEntry, ___target) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::__DelegateSerializationHolder__DelegateEntry, ___targetTypeAssembly) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::__DelegateSerializationHolder__DelegateEntry, ___targetTypeName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::__DelegateSerializationHolder__DelegateEntry, ___methodName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::__DelegateSerializationHolder__DelegateEntry, ___delegateEntry) == 0x40, "Offset mismatch!");

} // namespace System
// Type: System::DelegateSerializationHolder
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::DelegateSerializationHolder*
class CORDL_TYPE DelegateSerializationHolder : public ::System::Object {
public:
  // Declarations
  using DelegateEntry = ::System::__DelegateSerializationHolder__DelegateEntry;

  /// @brief Field _delegate, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__delegate, put = __cordl_internal_set__delegate)) ::System::Delegate* _delegate;

  /// @brief Convert operator to "::System::Runtime::Serialization::IObjectReference"
  constexpr operator ::System::Runtime::Serialization::IObjectReference*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method GetDelegateData, addr 0x3dd46a4, size 0x248, virtual false, abstract: false, final false
  static inline void GetDelegateData(::System::Delegate* instance, ::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext ctx);

  /// @brief Method GetObjectData, addr 0x3dd5058, size 0x38, virtual true, abstract: false, final true
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetRealObject, addr 0x3dd5090, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* GetRealObject(::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::DelegateSerializationHolder* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext ctx);

  constexpr ::System::Delegate*& __cordl_internal_get__delegate();

  constexpr ::cordl_internals::to_const_pointer<::System::Delegate*> const& __cordl_internal_get__delegate() const;

  constexpr void __cordl_internal_set__delegate(::System::Delegate* value);

  /// @brief Method .ctor, addr 0x3dd4abc, size 0x208, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext ctx);

  /// @brief Convert to "::System::Runtime::Serialization::IObjectReference"
  constexpr ::System::Runtime::Serialization::IObjectReference* i___System__Runtime__Serialization__IObjectReference() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DelegateSerializationHolder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DelegateSerializationHolder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DelegateSerializationHolder(DelegateSerializationHolder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DelegateSerializationHolder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DelegateSerializationHolder(DelegateSerializationHolder const&) = delete;

  /// @brief Field _delegate, offset: 0x10, size: 0x8, def value: None
  ::System::Delegate* ____delegate;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2593 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::DelegateSerializationHolder, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::DelegateSerializationHolder, ____delegate) == 0x10, "Offset mismatch!");

} // namespace System
NEED_NO_BOX(::System::DelegateSerializationHolder);
DEFINE_IL2CPP_ARG_TYPE(::System::DelegateSerializationHolder*, "System", "DelegateSerializationHolder");
NEED_NO_BOX(::System::__DelegateSerializationHolder__DelegateEntry);
DEFINE_IL2CPP_ARG_TYPE(::System::__DelegateSerializationHolder__DelegateEntry*, "System", "DelegateSerializationHolder/DelegateEntry");
