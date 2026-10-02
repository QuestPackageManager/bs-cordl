#pragma once
// IWYU pragma private; include "System/Data/ExceptionBuilder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/zzzz__ExceptionBuilder_def.hpp"
#include "System/Data/zzzz__AggregateType_def.hpp"
#include "System/Data/zzzz__Constraint_def.hpp"
#include "System/Data/zzzz__DataColumn_def.hpp"
#include "System/Data/zzzz__DataRowState_def.hpp"
#include "System/Data/zzzz__DataSetDateTime_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/Data/zzzz__ForeignKeyConstraint_def.hpp"
#include "System/Data/zzzz__RBTreeError_def.hpp"
#include "System/Data/zzzz__SerializationFormat_def.hpp"
#include "System/Data/zzzz__UniqueConstraint_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TypeCode_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Data::ExceptionBuilder.TraceException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::Exception*)>(&::System::Data::ExceptionBuilder::TraceException)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x64218e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "TraceException", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.TraceExceptionAsReturnValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::System::Exception*)>(&::System::Data::ExceptionBuilder::TraceExceptionAsReturnValue)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6421990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "TraceExceptionAsReturnValue", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.TraceExceptionForCapture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::System::Exception*)>(&::System::Data::ExceptionBuilder::TraceExceptionForCapture)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x641d3d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "TraceExceptionForCapture", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.TraceExceptionWithoutRethrow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::System::Exception*)>(&::System::Data::ExceptionBuilder::TraceExceptionWithoutRethrow)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x641d634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "TraceExceptionWithoutRethrow", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder._Argument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::_Argument)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x64219e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "_Argument", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder._Argument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, ::System::Exception*)>(&::System::Data::ExceptionBuilder::_Argument)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6421a50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "_Argument", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder._ArgumentNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, ::StringW)>(&::System::Data::ExceptionBuilder::_ArgumentNull)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6421acc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "_ArgumentNull", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder._ArgumentOutOfRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, ::StringW)>(&::System::Data::ExceptionBuilder::_ArgumentOutOfRange)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6421b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "_ArgumentOutOfRange", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder._IndexOutOfRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::_IndexOutOfRange)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6421bc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "_IndexOutOfRange", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder._InvalidOperation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::_InvalidOperation)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6421c30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "_InvalidOperation", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder._InvalidEnumArgumentException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::_InvalidEnumArgumentException)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6421c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "_InvalidEnumArgumentException", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.ThrowDataException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::Exception*)>(&::System::Data::ExceptionBuilder::ThrowDataException)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6421d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ThrowDataException", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder._Data
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::_Data)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6421d58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "_Data", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder._Constraint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::_Constraint)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6421dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "_Constraint", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder._InvalidConstraint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::_InvalidConstraint)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6421e30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "_InvalidConstraint", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder._DeletedRowInaccessible
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::_DeletedRowInaccessible)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6421e9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "_DeletedRowInaccessible", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder._DuplicateName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::_DuplicateName)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6421f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "_DuplicateName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder._InRowChangingEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::_InRowChangingEvent)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6421f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "_InRowChangingEvent", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder._NoNullAllowed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::_NoNullAllowed)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6421fe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "_NoNullAllowed", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder._ReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::_ReadOnly)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x642204c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "_ReadOnly", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder._RowNotInTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::_RowNotInTable)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x64220b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "_RowNotInTable", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder._VersionNotFound
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::_VersionNotFound)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6422124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "_VersionNotFound", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.ArgumentNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::ArgumentNull)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6419c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ArgumentNull", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.ArgumentOutOfRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::ArgumentOutOfRange)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6422190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ArgumentOutOfRange", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.BadObjectPropertyAccess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::BadObjectPropertyAccess)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x64221e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "BadObjectPropertyAccess", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.TypeNotAllowed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::System::Type*)>(&::System::Data::ExceptionBuilder::TypeNotAllowed)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6422238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "TypeNotAllowed", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.CaseInsensitiveNameConflict
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::CaseInsensitiveNameConflict)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x64222a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CaseInsensitiveNameConflict", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.NamespaceNameConflict
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::NamespaceNameConflict)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x64222f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "NamespaceNameConflict", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.InvalidOffsetLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::InvalidOffsetLength)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6422348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "InvalidOffsetLength", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.ColumnNotInTheTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, ::StringW)>(&::System::Data::ExceptionBuilder::ColumnNotInTheTable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x642238c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ColumnNotInTheTable", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.ColumnNotInAnyTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::ColumnNotInAnyTable)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x64223ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ColumnNotInAnyTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.ColumnOutOfRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(int32_t)>(&::System::Data::ExceptionBuilder::ColumnOutOfRange)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6422430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ColumnOutOfRange", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.ColumnOutOfRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::ColumnOutOfRange)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x64224c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ColumnOutOfRange", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.CannotAddColumn1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::CannotAddColumn1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6422514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CannotAddColumn1", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.CannotAddColumn2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::CannotAddColumn2)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6422564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CannotAddColumn2", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.CannotAddColumn3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::CannotAddColumn3)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x641ef3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CannotAddColumn3", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.CannotAddColumn4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::CannotAddColumn4)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x641ef80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CannotAddColumn4", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.CannotAddDuplicate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::CannotAddDuplicate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x64225b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CannotAddDuplicate", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.CannotAddDuplicate2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::CannotAddDuplicate2)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6422604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CannotAddDuplicate2", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.CannotAddDuplicate3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::CannotAddDuplicate3)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6422654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CannotAddDuplicate3", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.CannotRemoveColumn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::CannotRemoveColumn)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x64226a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CannotRemoveColumn", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.CannotRemovePrimaryKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::CannotRemovePrimaryKey)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x64226e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CannotRemovePrimaryKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.CannotRemoveChildKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::CannotRemoveChildKey)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x642272c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CannotRemoveChildKey", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.CannotRemoveConstraint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, ::StringW)>(&::System::Data::ExceptionBuilder::CannotRemoveConstraint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x642277c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CannotRemoveConstraint", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.CannotRemoveExpression
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, ::StringW)>(&::System::Data::ExceptionBuilder::CannotRemoveExpression)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x64227dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CannotRemoveExpression", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.AddPrimaryKeyConstraint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::AddPrimaryKeyConstraint)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x642283c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "AddPrimaryKeyConstraint", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.NoConstraintName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::NoConstraintName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6422880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "NoConstraintName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.ConstraintViolation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::ConstraintViolation)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x64228c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ConstraintViolation", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.KeysToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<::System::Object*>)>(&::System::Data::ExceptionBuilder::KeysToString)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6422914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "KeysToString", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.UniqueConstraintViolationText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<::System::Data::DataColumn*>, ::ArrayW<::System::Object*>)>(
    &::System::Data::ExceptionBuilder::UniqueConstraintViolationText)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x6422a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(),
                                                { "UniqueConstraintViolationText", {}, { ::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.ConstraintViolation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::ArrayW<::System::Data::DataColumn*>, ::ArrayW<::System::Object*>)>(
    &::System::Data::ExceptionBuilder::ConstraintViolation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6422bb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(),
                                                { "ConstraintViolation", {}, { ::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.ConstraintOutOfRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(int32_t)>(&::System::Data::ExceptionBuilder::ConstraintOutOfRange)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6422bc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ConstraintOutOfRange", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.DuplicateConstraint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::DuplicateConstraint)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6422c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "DuplicateConstraint", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.DuplicateConstraintName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::DuplicateConstraintName)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6422cac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "DuplicateConstraintName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.NeededForForeignKeyConstraint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::System::Data::UniqueConstraint*, ::System::Data::ForeignKeyConstraint*)>(
    &::System::Data::ExceptionBuilder::NeededForForeignKeyConstraint)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6422cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(),
                                         { "NeededForForeignKeyConstraint", {}, { ::i2c::type_of<::System::Data::UniqueConstraint*>(), ::i2c::type_of<::System::Data::ForeignKeyConstraint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.UniqueConstraintViolation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::UniqueConstraintViolation)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6422d90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "UniqueConstraintViolation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.ConstraintForeignTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::ConstraintForeignTable)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6422dd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ConstraintForeignTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.ConstraintParentValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::ConstraintParentValues)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6422e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ConstraintParentValues", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.ConstraintAddFailed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::System::Data::DataTable*)>(&::System::Data::ExceptionBuilder::ConstraintAddFailed)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6422e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ConstraintAddFailed", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.ConstraintRemoveFailed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::ConstraintRemoveFailed)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6422eb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ConstraintRemoveFailed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.FailedCascadeDelete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::FailedCascadeDelete)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6422ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "FailedCascadeDelete", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.FailedCascadeUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::FailedCascadeUpdate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6422f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "FailedCascadeUpdate", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.FailedClearParentTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, ::StringW, ::StringW)>(&::System::Data::ExceptionBuilder::FailedClearParentTable)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6422f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(),
                                                             { "FailedClearParentTable", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.ForeignKeyViolation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, ::ArrayW<::System::Object*>)>(&::System::Data::ExceptionBuilder::ForeignKeyViolation)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6423000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ForeignKeyViolation", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.RemoveParentRow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::System::Data::ForeignKeyConstraint*)>(&::System::Data::ExceptionBuilder::RemoveParentRow)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x642306c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RemoveParentRow", {}, { ::i2c::type_of<::System::Data::ForeignKeyConstraint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.MaxLengthViolationText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Data::ExceptionBuilder::MaxLengthViolationText)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x64201b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "MaxLengthViolationText", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.NotAllowDBNullViolationText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Data::ExceptionBuilder::NotAllowDBNullViolationText)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6420338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "NotAllowDBNullViolationText", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.CantAddConstraintToMultipleNestedTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::CantAddConstraintToMultipleNestedTable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x64230d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CantAddConstraintToMultipleNestedTable", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.AutoIncrementAndExpression
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::AutoIncrementAndExpression)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x641ae24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "AutoIncrementAndExpression", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.AutoIncrementAndDefaultValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::AutoIncrementAndDefaultValue)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x641ae68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "AutoIncrementAndDefaultValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.AutoIncrementSeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::AutoIncrementSeed)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6420ab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "AutoIncrementSeed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.CantChangeDataType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::CantChangeDataType)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x641c68c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CantChangeDataType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.NullDataType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::NullDataType)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x641c6d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "NullDataType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.ColumnNameRequired
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::ColumnNameRequired)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x641c260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ColumnNameRequired", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.DefaultValueAndAutoIncrement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::DefaultValueAndAutoIncrement)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x641d088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "DefaultValueAndAutoIncrement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.DefaultValueDataType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, ::System::Type*, ::System::Type*, ::System::Exception*)>(
    &::System::Data::ExceptionBuilder::DefaultValueDataType)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x641cc98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Data::ExceptionBuilder*>(),
            { "DefaultValueDataType", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.DefaultValueColumnDataType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, ::System::Type*, ::System::Type*, ::System::Exception*)>(
    &::System::Data::ExceptionBuilder::DefaultValueColumnDataType)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x641d0cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Data::ExceptionBuilder*>(),
            { "DefaultValueColumnDataType", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.ExpressionAndUnique
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::ExpressionAndUnique)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x641d218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ExpressionAndUnique", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.ExpressionAndReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::ExpressionAndReadOnly)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x641d42c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ExpressionAndReadOnly", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.ExpressionAndConstraint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::System::Data::DataColumn*, ::System::Data::Constraint*)>(
    &::System::Data::ExceptionBuilder::ExpressionAndConstraint)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x641d25c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(),
                                                             { "ExpressionAndConstraint", {}, { ::i2c::type_of<::System::Data::DataColumn*>(), ::i2c::type_of<::System::Data::Constraint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.ExpressionInConstraint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::System::Data::DataColumn*)>(&::System::Data::ExceptionBuilder::ExpressionInConstraint)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6423128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ExpressionInConstraint", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.ExpressionCircular
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::ExpressionCircular)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x641d470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ExpressionCircular", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.NonUniqueValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::NonUniqueValues)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x641f23c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "NonUniqueValues", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.NullKeyValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::NullKeyValues)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x641f19c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "NullKeyValues", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.NullValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::NullValues)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x641f1ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "NullValues", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.ReadOnlyAndExpression
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::ReadOnlyAndExpression)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x641e2b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ReadOnlyAndExpression", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.ReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::ReadOnly)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6423180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ReadOnly", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.UniqueAndExpression
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::UniqueAndExpression)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x641ec14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "UniqueAndExpression", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.SetFailed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::System::Object*, ::System::Data::DataColumn*, ::System::Type*, ::System::Exception*)>(
    &::System::Data::ExceptionBuilder::SetFailed)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x641e5f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Data::ExceptionBuilder*>(),
            { "SetFailed", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Data::DataColumn*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.CannotSetToNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::System::Data::DataColumn*)>(&::System::Data::ExceptionBuilder::CannotSetToNull)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x64231d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CannotSetToNull", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.LongerThanMaxLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::System::Data::DataColumn*)>(&::System::Data::ExceptionBuilder::LongerThanMaxLength)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x641f144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "LongerThanMaxLength", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.CannotSetMaxLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::System::Data::DataColumn*, int32_t)>(&::System::Data::ExceptionBuilder::CannotSetMaxLength)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x641dee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CannotSetMaxLength", {}, { ::i2c::type_of<::System::Data::DataColumn*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.CannotSetMaxLength2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::System::Data::DataColumn*)>(&::System::Data::ExceptionBuilder::CannotSetMaxLength2)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x641dafc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CannotSetMaxLength2", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.CannotSetSimpleContentType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, ::System::Type*)>(&::System::Data::ExceptionBuilder::CannotSetSimpleContentType)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x641cdbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(),
                                                                                           { "CannotSetSimpleContentType", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.CannotSetSimpleContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, ::System::Type*)>(&::System::Data::ExceptionBuilder::CannotSetSimpleContent)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x641eedc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CannotSetSimpleContent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.CannotChangeNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::CannotChangeNamespace)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x641e108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CannotChangeNamespace", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.HasToBeStringType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::System::Data::DataColumn*)>(&::System::Data::ExceptionBuilder::HasToBeStringType)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x641db54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "HasToBeStringType", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.AutoIncrementCannotSetIfHasData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::AutoIncrementCannotSetIfHasData)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x641b104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "AutoIncrementCannotSetIfHasData", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.INullableUDTwithoutStaticNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::INullableUDTwithoutStaticNull)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6423228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "INullableUDTwithoutStaticNull", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.IComparableNotImplemented
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::IComparableNotImplemented)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6423278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "IComparableNotImplemented", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.UDTImplementsIChangeTrackingButnotIRevertible
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::UDTImplementsIChangeTrackingButnotIRevertible)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x64232c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "UDTImplementsIChangeTrackingButnotIRevertible", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.InvalidDataColumnMapping
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::System::Type*)>(&::System::Data::ExceptionBuilder::InvalidDataColumnMapping)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6423318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "InvalidDataColumnMapping", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.CannotSetDateTimeModeForNonDateTimeColumns
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::CannotSetDateTimeModeForNonDateTimeColumns)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x641cf38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CannotSetDateTimeModeForNonDateTimeColumns", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.InvalidDateTimeMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::System::Data::DataSetDateTime)>(&::System::Data::ExceptionBuilder::InvalidDateTimeMode)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x641d03c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "InvalidDateTimeMode", {}, { ::i2c::type_of<::System::Data::DataSetDateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.CantChangeDateTimeMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::System::Data::DataSetDateTime, ::System::Data::DataSetDateTime)>(
    &::System::Data::ExceptionBuilder::CantChangeDateTimeMode)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x641cf7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(),
                                                { "CantChangeDateTimeMode", {}, { ::i2c::type_of<::System::Data::DataSetDateTime>(), ::i2c::type_of<::System::Data::DataSetDateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.ColumnTypeNotSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::ColumnTypeNotSupported)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6419c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ColumnTypeNotSupported", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.SetFailed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::SetFailed)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6423388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "SetFailed", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.CanNotUse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::CanNotUse)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x64233d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CanNotUse", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.SetIListObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::SetIListObject)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x642341c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "SetIListObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.AddNewNotAllowNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::AddNewNotAllowNull)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6423460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "AddNewNotAllowNull", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.NotOpen
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::NotOpen)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x64234a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "NotOpen", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.CreateChildView
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::CreateChildView)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x64234e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CreateChildView", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.CanNotDelete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::CanNotDelete)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x642352c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CanNotDelete", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.GetElementIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(int32_t)>(&::System::Data::ExceptionBuilder::GetElementIndex)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6423570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "GetElementIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.AddExternalObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::AddExternalObject)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6423604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "AddExternalObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.CanNotClear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::CanNotClear)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6423648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CanNotClear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.InsertExternalObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::InsertExternalObject)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x642368c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "InsertExternalObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.RemoveExternalObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::RemoveExternalObject)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x64236d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RemoveExternalObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.KeyTableMismatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::KeyTableMismatch)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6423714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "KeyTableMismatch", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.KeyNoColumns
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::KeyNoColumns)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6423758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "KeyNoColumns", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.KeyTooManyColumns
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(int32_t)>(&::System::Data::ExceptionBuilder::KeyTooManyColumns)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x642379c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "KeyTooManyColumns", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.KeyDuplicateColumns
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::KeyDuplicateColumns)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6423830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "KeyDuplicateColumns", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.RelationDataSetMismatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::RelationDataSetMismatch)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6423880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RelationDataSetMismatch", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.ColumnsTypeMismatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::ColumnsTypeMismatch)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x641c868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ColumnsTypeMismatch", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.KeyLengthMismatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::KeyLengthMismatch)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x64238c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "KeyLengthMismatch", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.KeyLengthZero
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::KeyLengthZero)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6423908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "KeyLengthZero", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.ForeignRelation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::ForeignRelation)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x642394c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ForeignRelation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.KeyColumnsIdentical
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::KeyColumnsIdentical)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6423990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "KeyColumnsIdentical", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.RelationForeignTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, ::StringW)>(&::System::Data::ExceptionBuilder::RelationForeignTable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x64239d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RelationForeignTable", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.GetParentRowTableMismatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, ::StringW)>(&::System::Data::ExceptionBuilder::GetParentRowTableMismatch)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6423a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "GetParentRowTableMismatch", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.SetParentRowTableMismatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, ::StringW)>(&::System::Data::ExceptionBuilder::SetParentRowTableMismatch)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6423a94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "SetParentRowTableMismatch", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.RelationForeignRow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::RelationForeignRow)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6423af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RelationForeignRow", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.RelationNestedReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::RelationNestedReadOnly)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6423b38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RelationNestedReadOnly", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.TableCantBeNestedInTwoTables
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::TableCantBeNestedInTwoTables)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6423b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "TableCantBeNestedInTwoTables", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.LoopInNestedRelations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::LoopInNestedRelations)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6423bcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "LoopInNestedRelations", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.RelationDoesNotExist
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::RelationDoesNotExist)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6423c1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RelationDoesNotExist", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.ParentOrChildColumnsDoNotHaveDataSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::ParentOrChildColumnsDoNotHaveDataSet)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6423c60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ParentOrChildColumnsDoNotHaveDataSet", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.InValidNestedRelation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::InValidNestedRelation)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6423ca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "InValidNestedRelation", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.InvalidParentNamespaceinNestedRelation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::InvalidParentNamespaceinNestedRelation)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6423cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "InvalidParentNamespaceinNestedRelation", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.RowNotInTheDataSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::RowNotInTheDataSet)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6423d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RowNotInTheDataSet", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.RowNotInTheTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::RowNotInTheTable)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6423d88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RowNotInTheTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.EditInRowChanging
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::EditInRowChanging)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6423dcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "EditInRowChanging", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.EndEditInRowChanging
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::EndEditInRowChanging)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6423e10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "EndEditInRowChanging", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.BeginEditInRowChanging
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::BeginEditInRowChanging)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6423e54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "BeginEditInRowChanging", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.CancelEditInRowChanging
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::CancelEditInRowChanging)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6423e98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CancelEditInRowChanging", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.DeleteInRowDeleting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::DeleteInRowDeleting)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6423edc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "DeleteInRowDeleting", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.ValueArrayLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::ValueArrayLength)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6423f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ValueArrayLength", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.NoCurrentData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::NoCurrentData)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6423f64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "NoCurrentData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.NoOriginalData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::NoOriginalData)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6423fa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "NoOriginalData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.NoProposedData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::NoProposedData)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6423fec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "NoProposedData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.RowRemovedFromTheTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::RowRemovedFromTheTable)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6424030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RowRemovedFromTheTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.DeletedRowInaccessible
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::DeletedRowInaccessible)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6424074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "DeletedRowInaccessible", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.RowAlreadyDeleted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::RowAlreadyDeleted)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x64240b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RowAlreadyDeleted", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.RowEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::RowEmpty)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x64240fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RowEmpty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.InvalidRowVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::InvalidRowVersion)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6424140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "InvalidRowVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.RowOutOfRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(int32_t)>(&::System::Data::ExceptionBuilder::RowOutOfRange)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6424184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RowOutOfRange", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.RowInsertTwice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(int32_t, ::StringW)>(&::System::Data::ExceptionBuilder::RowInsertTwice)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6424218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RowInsertTwice", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.RowInsertMissing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::RowInsertMissing)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x64242bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RowInsertMissing", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.RowAlreadyRemoved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::RowAlreadyRemoved)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x642430c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RowAlreadyRemoved", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.MultipleParents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::MultipleParents)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6424350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "MultipleParents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.InvalidRowState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::System::Data::DataRowState)>(&::System::Data::ExceptionBuilder::InvalidRowState)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6424394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "InvalidRowState", {}, { ::i2c::type_of<::System::Data::DataRowState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.InvalidRowBitPattern
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::InvalidRowBitPattern)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x64243e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "InvalidRowBitPattern", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.SetDataSetNameToEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::SetDataSetNameToEmpty)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6424424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "SetDataSetNameToEmpty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.SetDataSetNameConflicting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::SetDataSetNameConflicting)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6424468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "SetDataSetNameConflicting", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.DataSetUnsupportedSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::DataSetUnsupportedSchema)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x64244b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "DataSetUnsupportedSchema", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.MergeMissingDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::MergeMissingDefinition)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6424508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "MergeMissingDefinition", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.TablesInDifferentSets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::TablesInDifferentSets)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6424558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "TablesInDifferentSets", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.RelationAlreadyExists
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::RelationAlreadyExists)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x642459c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RelationAlreadyExists", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.RowAlreadyInOtherCollection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::RowAlreadyInOtherCollection)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x64245e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RowAlreadyInOtherCollection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.RowAlreadyInTheCollection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::RowAlreadyInTheCollection)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6424624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RowAlreadyInTheCollection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.RecordStateRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::RecordStateRange)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6424668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RecordStateRange", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.IndexKeyLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(int32_t, int32_t)>(&::System::Data::ExceptionBuilder::IndexKeyLength)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x64246ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "IndexKeyLength", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.RemovePrimaryKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::System::Data::DataTable*)>(&::System::Data::ExceptionBuilder::RemovePrimaryKey)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6424790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RemovePrimaryKey", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.RelationAlreadyInOtherDataSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::RelationAlreadyInOtherDataSet)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6424814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RelationAlreadyInOtherDataSet", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.RelationAlreadyInTheDataSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::RelationAlreadyInTheDataSet)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6424858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RelationAlreadyInTheDataSet", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.RelationNotInTheDataSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::RelationNotInTheDataSet)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x642489c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RelationNotInTheDataSet", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.RelationOutOfRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::System::Object*)>(&::System::Data::ExceptionBuilder::RelationOutOfRange)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x64248ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RelationOutOfRange", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.DuplicateRelation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::DuplicateRelation)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6424978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "DuplicateRelation", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.RelationTableNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::RelationTableNull)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x64249c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RelationTableNull", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.RelationDataSetNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::RelationDataSetNull)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6424a0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RelationDataSetNull", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.RelationTableWasRemoved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::RelationTableWasRemoved)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6424a50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RelationTableWasRemoved", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.ParentTableMismatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::ParentTableMismatch)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6424a94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ParentTableMismatch", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.ChildTableMismatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::ChildTableMismatch)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6424ad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ChildTableMismatch", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.EnforceConstraint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::EnforceConstraint)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6424b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "EnforceConstraint", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.CaseLocaleMismatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::CaseLocaleMismatch)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6424b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CaseLocaleMismatch", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.CannotChangeCaseLocale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::CannotChangeCaseLocale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6424ba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CannotChangeCaseLocale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.CannotChangeCaseLocale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::System::Exception*)>(&::System::Data::ExceptionBuilder::CannotChangeCaseLocale)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6424bac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CannotChangeCaseLocale", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.InvalidRemotingFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::System::Data::SerializationFormat)>(&::System::Data::ExceptionBuilder::InvalidRemotingFormat)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6424bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "InvalidRemotingFormat", {}, { ::i2c::type_of<::System::Data::SerializationFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.TableForeignPrimaryKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::TableForeignPrimaryKey)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6424c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "TableForeignPrimaryKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.TableCannotAddToSimpleContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::TableCannotAddToSimpleContent)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6424c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "TableCannotAddToSimpleContent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.NoTableName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::NoTableName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6424ccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "NoTableName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.MultipleTextOnlyColumns
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::MultipleTextOnlyColumns)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6424d10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "MultipleTextOnlyColumns", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.InvalidSortString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::InvalidSortString)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6424d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "InvalidSortString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.DuplicateTableName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::DuplicateTableName)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6424da4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "DuplicateTableName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.DuplicateTableName2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, ::StringW)>(&::System::Data::ExceptionBuilder::DuplicateTableName2)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6424df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "DuplicateTableName2", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.SelfnestedDatasetConflictingName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::SelfnestedDatasetConflictingName)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6424e54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "SelfnestedDatasetConflictingName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.DatasetConflictingName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::DatasetConflictingName)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6424ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "DatasetConflictingName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.TableAlreadyInOtherDataSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::TableAlreadyInOtherDataSet)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6424ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "TableAlreadyInOtherDataSet", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.TableAlreadyInTheDataSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::TableAlreadyInTheDataSet)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6424f38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "TableAlreadyInTheDataSet", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.TableOutOfRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(int32_t)>(&::System::Data::ExceptionBuilder::TableOutOfRange)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6424f7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "TableOutOfRange", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.TableNotInTheDataSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::TableNotInTheDataSet)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6425010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "TableNotInTheDataSet", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.TableInRelation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::TableInRelation)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6425060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "TableInRelation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.TableInConstraint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::System::Data::DataTable*, ::System::Data::Constraint*)>(&::System::Data::ExceptionBuilder::TableInConstraint)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x64250a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(),
                                                             { "TableInConstraint", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::System::Data::Constraint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.CanNotSerializeDataTableHierarchy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::CanNotSerializeDataTableHierarchy)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6425128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CanNotSerializeDataTableHierarchy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.CanNotRemoteDataTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::CanNotRemoteDataTable)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x642516c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CanNotRemoteDataTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.CanNotSetRemotingFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::CanNotSetRemotingFormat)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x64251b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CanNotSetRemotingFormat", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.CanNotSerializeDataTableWithEmptyName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::CanNotSerializeDataTableWithEmptyName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x64251f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CanNotSerializeDataTableWithEmptyName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.TableNotFound
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::TableNotFound)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6425238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "TableNotFound", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.AggregateException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::System::Data::AggregateType, ::System::Type*)>(&::System::Data::ExceptionBuilder::AggregateException)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6425288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(),
                                                             { "AggregateException", {}, { ::i2c::type_of<::System::Data::AggregateType>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.InvalidStorageType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::System::TypeCode)>(&::System::Data::ExceptionBuilder::InvalidStorageType)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6425348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "InvalidStorageType", {}, { ::i2c::type_of<::System::TypeCode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.RangeArgument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(int32_t, int32_t)>(&::System::Data::ExceptionBuilder::RangeArgument)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x64253dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RangeArgument", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.NullRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::NullRange)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6425490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "NullRange", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.NegativeMinimumCapacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::NegativeMinimumCapacity)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x64254d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "NegativeMinimumCapacity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.ProblematicChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(char16_t)>(&::System::Data::ExceptionBuilder::ProblematicChars)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6425518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ProblematicChars", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.StorageSetFailed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::StorageSetFailed)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6425600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "StorageSetFailed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.SimpleTypeNotSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::SimpleTypeNotSupported)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6425644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "SimpleTypeNotSupported", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.MissingAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::MissingAttribute)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6425688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "MissingAttribute", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.MissingAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, ::StringW)>(&::System::Data::ExceptionBuilder::MissingAttribute)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x64256a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "MissingAttribute", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.InvalidAttributeValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, ::StringW)>(&::System::Data::ExceptionBuilder::InvalidAttributeValue)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6425704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "InvalidAttributeValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.AttributeValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, ::StringW, ::StringW)>(&::System::Data::ExceptionBuilder::AttributeValues)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6425764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(),
                                                             { "AttributeValues", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.ElementTypeNotFound
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::ElementTypeNotFound)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x64257cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ElementTypeNotFound", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.RelationParentNameMissing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::RelationParentNameMissing)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x642581c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RelationParentNameMissing", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.RelationChildNameMissing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::RelationChildNameMissing)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x642586c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RelationChildNameMissing", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.RelationTableKeyMissing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::RelationTableKeyMissing)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x64258bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RelationTableKeyMissing", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.RelationChildKeyMissing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::RelationChildKeyMissing)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x642590c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RelationChildKeyMissing", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.UndefinedDatatype
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::UndefinedDatatype)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x642595c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "UndefinedDatatype", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.DatatypeNotDefined
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::DatatypeNotDefined)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x64259ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "DatatypeNotDefined", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.MismatchKeyLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::MismatchKeyLength)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x64259f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "MismatchKeyLength", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.InvalidField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::InvalidField)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6425a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "InvalidField", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.InvalidSelector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::InvalidSelector)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6425a84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "InvalidSelector", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.CircularComplexType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::CircularComplexType)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6425ad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CircularComplexType", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.CannotInstantiateAbstract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::CannotInstantiateAbstract)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6425b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CannotInstantiateAbstract", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.InvalidKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::InvalidKey)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6425b74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "InvalidKey", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.DiffgramMissingTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::DiffgramMissingTable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6425bc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "DiffgramMissingTable", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.DiffgramMissingSQL
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::DiffgramMissingSQL)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6425c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "DiffgramMissingSQL", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.DuplicateConstraintRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::DuplicateConstraintRead)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6425c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "DuplicateConstraintRead", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.ColumnTypeConflict
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::ColumnTypeConflict)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6425ca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ColumnTypeConflict", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.CannotConvert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, ::StringW)>(&::System::Data::ExceptionBuilder::CannotConvert)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6425cf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CannotConvert", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.MissingRefer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::MissingRefer)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6425d58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "MissingRefer", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.InvalidPrefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::InvalidPrefix)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x641c4f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "InvalidPrefix", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.CanNotDeserializeObjectType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::CanNotDeserializeObjectType)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6425de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CanNotDeserializeObjectType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.IsDataSetAttributeMissingInSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::IsDataSetAttributeMissingInSchema)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6425e24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "IsDataSetAttributeMissingInSchema", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.TooManyIsDataSetAtributeInSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::TooManyIsDataSetAtributeInSchema)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6425e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "TooManyIsDataSetAtributeInSchema", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.NestedCircular
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::NestedCircular)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6425eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "NestedCircular", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.MultipleParentRows
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::MultipleParentRows)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6425efc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "MultipleParentRows", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.PolymorphismNotSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::PolymorphismNotSupported)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6425f4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "PolymorphismNotSupported", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.DataTableInferenceNotSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::DataTableInferenceNotSupported)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6425f9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "DataTableInferenceNotSupported", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.ThrowMultipleTargetConverter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Exception*)>(&::System::Data::ExceptionBuilder::ThrowMultipleTargetConverter)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6425fe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ThrowMultipleTargetConverter", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.DuplicateDeclaration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::DuplicateDeclaration)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6426050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "DuplicateDeclaration", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.FoundEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::FoundEntity)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x64260a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "FoundEntity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.MergeFailed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExceptionBuilder::MergeFailed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64260e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "MergeFailed", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.ConvertFailed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::System::Type*, ::System::Type*)>(&::System::Data::ExceptionBuilder::ConvertFailed)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x64260e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ConvertFailed", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.InvalidDuplicateNamedSimpleTypeDelaration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, ::StringW)>(&::System::Data::ExceptionBuilder::InvalidDuplicateNamedSimpleTypeDelaration)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6426184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "InvalidDuplicateNamedSimpleTypeDelaration", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.InternalRBTreeError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::System::Data::RBTreeError)>(&::System::Data::ExceptionBuilder::InternalRBTreeError)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x64261e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "InternalRBTreeError", {}, { ::i2c::type_of<::System::Data::RBTreeError>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExceptionBuilder.EnumeratorModified
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExceptionBuilder::EnumeratorModified)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6426254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "EnumeratorModified", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Data::ExceptionBuilder::TraceException(::StringW trace, ::System::Exception* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "TraceException", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, trace, e);
}
inline ::System::Exception* System::Data::ExceptionBuilder::TraceExceptionAsReturnValue(::System::Exception* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "TraceExceptionAsReturnValue", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, e);
}
inline ::System::Exception* System::Data::ExceptionBuilder::TraceExceptionForCapture(::System::Exception* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "TraceExceptionForCapture", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, e);
}
inline ::System::Exception* System::Data::ExceptionBuilder::TraceExceptionWithoutRethrow(::System::Exception* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "TraceExceptionWithoutRethrow", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, e);
}
inline ::System::Exception* System::Data::ExceptionBuilder::_Argument(::StringW error) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "_Argument", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, error);
}
inline ::System::Exception* System::Data::ExceptionBuilder::_Argument(::StringW error, ::System::Exception* innerException) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "_Argument", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, error, innerException);
}
inline ::System::Exception* System::Data::ExceptionBuilder::_ArgumentNull(::StringW paramName, ::StringW msg) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "_ArgumentNull", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, paramName, msg);
}
inline ::System::Exception* System::Data::ExceptionBuilder::_ArgumentOutOfRange(::StringW paramName, ::StringW msg) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "_ArgumentOutOfRange", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, paramName, msg);
}
inline ::System::Exception* System::Data::ExceptionBuilder::_IndexOutOfRange(::StringW error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "_IndexOutOfRange", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, error);
}
inline ::System::Exception* System::Data::ExceptionBuilder::_InvalidOperation(::StringW error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "_InvalidOperation", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, error);
}
inline ::System::Exception* System::Data::ExceptionBuilder::_InvalidEnumArgumentException(::StringW error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "_InvalidEnumArgumentException", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, error);
}
template <typename T> inline ::System::Exception* System::Data::ExceptionBuilder::_InvalidEnumArgumentException(T value) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "_InvalidEnumArgumentException", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, value);
}
inline void System::Data::ExceptionBuilder::ThrowDataException(::StringW error, ::System::Exception* innerException) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ThrowDataException", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, error, innerException);
}
inline ::System::Exception* System::Data::ExceptionBuilder::_Data(::StringW error) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "_Data", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, error);
}
inline ::System::Exception* System::Data::ExceptionBuilder::_Constraint(::StringW error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "_Constraint", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, error);
}
inline ::System::Exception* System::Data::ExceptionBuilder::_InvalidConstraint(::StringW error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "_InvalidConstraint", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, error);
}
inline ::System::Exception* System::Data::ExceptionBuilder::_DeletedRowInaccessible(::StringW error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "_DeletedRowInaccessible", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, error);
}
inline ::System::Exception* System::Data::ExceptionBuilder::_DuplicateName(::StringW error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "_DuplicateName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, error);
}
inline ::System::Exception* System::Data::ExceptionBuilder::_InRowChangingEvent(::StringW error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "_InRowChangingEvent", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, error);
}
inline ::System::Exception* System::Data::ExceptionBuilder::_NoNullAllowed(::StringW error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "_NoNullAllowed", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, error);
}
inline ::System::Exception* System::Data::ExceptionBuilder::_ReadOnly(::StringW error) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "_ReadOnly", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, error);
}
inline ::System::Exception* System::Data::ExceptionBuilder::_RowNotInTable(::StringW error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "_RowNotInTable", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, error);
}
inline ::System::Exception* System::Data::ExceptionBuilder::_VersionNotFound(::StringW error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "_VersionNotFound", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, error);
}
inline ::System::Exception* System::Data::ExceptionBuilder::ArgumentNull(::StringW paramName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ArgumentNull", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, paramName);
}
inline ::System::Exception* System::Data::ExceptionBuilder::ArgumentOutOfRange(::StringW paramName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ArgumentOutOfRange", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, paramName);
}
inline ::System::Exception* System::Data::ExceptionBuilder::BadObjectPropertyAccess(::StringW error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "BadObjectPropertyAccess", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, error);
}
inline ::System::Exception* System::Data::ExceptionBuilder::TypeNotAllowed(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "TypeNotAllowed", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, type);
}
inline ::System::Exception* System::Data::ExceptionBuilder::CaseInsensitiveNameConflict(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CaseInsensitiveNameConflict", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, name);
}
inline ::System::Exception* System::Data::ExceptionBuilder::NamespaceNameConflict(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "NamespaceNameConflict", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, name);
}
inline ::System::Exception* System::Data::ExceptionBuilder::InvalidOffsetLength() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "InvalidOffsetLength", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::ColumnNotInTheTable(::StringW column, ::StringW table) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ColumnNotInTheTable", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, column, table);
}
inline ::System::Exception* System::Data::ExceptionBuilder::ColumnNotInAnyTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ColumnNotInAnyTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::ColumnOutOfRange(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ColumnOutOfRange", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, index);
}
inline ::System::Exception* System::Data::ExceptionBuilder::ColumnOutOfRange(::StringW column) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ColumnOutOfRange", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, column);
}
inline ::System::Exception* System::Data::ExceptionBuilder::CannotAddColumn1(::StringW column) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CannotAddColumn1", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, column);
}
inline ::System::Exception* System::Data::ExceptionBuilder::CannotAddColumn2(::StringW column) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CannotAddColumn2", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, column);
}
inline ::System::Exception* System::Data::ExceptionBuilder::CannotAddColumn3() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CannotAddColumn3", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::CannotAddColumn4(::StringW column) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CannotAddColumn4", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, column);
}
inline ::System::Exception* System::Data::ExceptionBuilder::CannotAddDuplicate(::StringW column) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CannotAddDuplicate", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, column);
}
inline ::System::Exception* System::Data::ExceptionBuilder::CannotAddDuplicate2(::StringW table) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CannotAddDuplicate2", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, table);
}
inline ::System::Exception* System::Data::ExceptionBuilder::CannotAddDuplicate3(::StringW table) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CannotAddDuplicate3", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, table);
}
inline ::System::Exception* System::Data::ExceptionBuilder::CannotRemoveColumn() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CannotRemoveColumn", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::CannotRemovePrimaryKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CannotRemovePrimaryKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::CannotRemoveChildKey(::StringW relation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CannotRemoveChildKey", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, relation);
}
inline ::System::Exception* System::Data::ExceptionBuilder::CannotRemoveConstraint(::StringW constraint, ::StringW table) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CannotRemoveConstraint", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, constraint, table);
}
inline ::System::Exception* System::Data::ExceptionBuilder::CannotRemoveExpression(::StringW column, ::StringW expression) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CannotRemoveExpression", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, column, expression);
}
inline ::System::Exception* System::Data::ExceptionBuilder::AddPrimaryKeyConstraint() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "AddPrimaryKeyConstraint", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::NoConstraintName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "NoConstraintName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::ConstraintViolation(::StringW constraint) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ConstraintViolation", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, constraint);
}
inline ::StringW System::Data::ExceptionBuilder::KeysToString(::ArrayW<::System::Object*> keys) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "KeysToString", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, keys);
}
inline ::StringW System::Data::ExceptionBuilder::UniqueConstraintViolationText(::ArrayW<::System::Data::DataColumn*> columns, ::ArrayW<::System::Object*> values) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(),
                                              { "UniqueConstraintViolationText", {}, { ::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, columns, values);
}
inline ::System::Exception* System::Data::ExceptionBuilder::ConstraintViolation(::ArrayW<::System::Data::DataColumn*> columns, ::ArrayW<::System::Object*> values) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(),
                                                           { "ConstraintViolation", {}, { ::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, columns, values);
}
inline ::System::Exception* System::Data::ExceptionBuilder::ConstraintOutOfRange(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ConstraintOutOfRange", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, index);
}
inline ::System::Exception* System::Data::ExceptionBuilder::DuplicateConstraint(::StringW constraint) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "DuplicateConstraint", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, constraint);
}
inline ::System::Exception* System::Data::ExceptionBuilder::DuplicateConstraintName(::StringW constraint) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "DuplicateConstraintName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, constraint);
}
inline ::System::Exception* System::Data::ExceptionBuilder::NeededForForeignKeyConstraint(::System::Data::UniqueConstraint* key, ::System::Data::ForeignKeyConstraint* fk) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(),
                                       { "NeededForForeignKeyConstraint", {}, { ::i2c::type_of<::System::Data::UniqueConstraint*>(), ::i2c::type_of<::System::Data::ForeignKeyConstraint*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, key, fk);
}
inline ::System::Exception* System::Data::ExceptionBuilder::UniqueConstraintViolation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "UniqueConstraintViolation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::ConstraintForeignTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ConstraintForeignTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::ConstraintParentValues() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ConstraintParentValues", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::ConstraintAddFailed(::System::Data::DataTable* table) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ConstraintAddFailed", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, table);
}
inline ::System::Exception* System::Data::ExceptionBuilder::ConstraintRemoveFailed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ConstraintRemoveFailed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::FailedCascadeDelete(::StringW constraint) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "FailedCascadeDelete", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, constraint);
}
inline ::System::Exception* System::Data::ExceptionBuilder::FailedCascadeUpdate(::StringW constraint) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "FailedCascadeUpdate", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, constraint);
}
inline ::System::Exception* System::Data::ExceptionBuilder::FailedClearParentTable(::StringW table, ::StringW constraint, ::StringW childTable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(),
                                                           { "FailedClearParentTable", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, table, constraint, childTable);
}
inline ::System::Exception* System::Data::ExceptionBuilder::ForeignKeyViolation(::StringW constraint, ::ArrayW<::System::Object*> keys) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ForeignKeyViolation", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, constraint, keys);
}
inline ::System::Exception* System::Data::ExceptionBuilder::RemoveParentRow(::System::Data::ForeignKeyConstraint* constraint) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RemoveParentRow", {}, { ::i2c::type_of<::System::Data::ForeignKeyConstraint*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, constraint);
}
inline ::StringW System::Data::ExceptionBuilder::MaxLengthViolationText(::StringW columnName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "MaxLengthViolationText", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, columnName);
}
inline ::StringW System::Data::ExceptionBuilder::NotAllowDBNullViolationText(::StringW columnName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "NotAllowDBNullViolationText", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, columnName);
}
inline ::System::Exception* System::Data::ExceptionBuilder::CantAddConstraintToMultipleNestedTable(::StringW tableName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CantAddConstraintToMultipleNestedTable", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, tableName);
}
inline ::System::Exception* System::Data::ExceptionBuilder::AutoIncrementAndExpression() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "AutoIncrementAndExpression", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::AutoIncrementAndDefaultValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "AutoIncrementAndDefaultValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::AutoIncrementSeed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "AutoIncrementSeed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::CantChangeDataType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CantChangeDataType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::NullDataType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "NullDataType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::ColumnNameRequired() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ColumnNameRequired", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::DefaultValueAndAutoIncrement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "DefaultValueAndAutoIncrement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::DefaultValueDataType(::StringW column, ::System::Type* defaultType, ::System::Type* columnType, ::System::Exception* inner) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Data::ExceptionBuilder*>(),
                       { "DefaultValueDataType", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, column, defaultType, columnType, inner);
}
inline ::System::Exception* System::Data::ExceptionBuilder::DefaultValueColumnDataType(::StringW column, ::System::Type* defaultType, ::System::Type* columnType, ::System::Exception* inner) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Data::ExceptionBuilder*>(),
          { "DefaultValueColumnDataType", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, column, defaultType, columnType, inner);
}
inline ::System::Exception* System::Data::ExceptionBuilder::ExpressionAndUnique() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ExpressionAndUnique", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::ExpressionAndReadOnly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ExpressionAndReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::ExpressionAndConstraint(::System::Data::DataColumn* column, ::System::Data::Constraint* constraint) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(),
                                                           { "ExpressionAndConstraint", {}, { ::i2c::type_of<::System::Data::DataColumn*>(), ::i2c::type_of<::System::Data::Constraint*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, column, constraint);
}
inline ::System::Exception* System::Data::ExceptionBuilder::ExpressionInConstraint(::System::Data::DataColumn* column) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ExpressionInConstraint", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, column);
}
inline ::System::Exception* System::Data::ExceptionBuilder::ExpressionCircular() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ExpressionCircular", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::NonUniqueValues(::StringW column) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "NonUniqueValues", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, column);
}
inline ::System::Exception* System::Data::ExceptionBuilder::NullKeyValues(::StringW column) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "NullKeyValues", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, column);
}
inline ::System::Exception* System::Data::ExceptionBuilder::NullValues(::StringW column) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "NullValues", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, column);
}
inline ::System::Exception* System::Data::ExceptionBuilder::ReadOnlyAndExpression() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ReadOnlyAndExpression", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::ReadOnly(::StringW column) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ReadOnly", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, column);
}
inline ::System::Exception* System::Data::ExceptionBuilder::UniqueAndExpression() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "UniqueAndExpression", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::SetFailed(::System::Object* value, ::System::Data::DataColumn* column, ::System::Type* type, ::System::Exception* innerException) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Data::ExceptionBuilder*>(),
          { "SetFailed", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Data::DataColumn*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, value, column, type, innerException);
}
inline ::System::Exception* System::Data::ExceptionBuilder::CannotSetToNull(::System::Data::DataColumn* column) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CannotSetToNull", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, column);
}
inline ::System::Exception* System::Data::ExceptionBuilder::LongerThanMaxLength(::System::Data::DataColumn* column) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "LongerThanMaxLength", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, column);
}
inline ::System::Exception* System::Data::ExceptionBuilder::CannotSetMaxLength(::System::Data::DataColumn* column, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(),
                                                                                         { "CannotSetMaxLength", {}, { ::i2c::type_of<::System::Data::DataColumn*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, column, value);
}
inline ::System::Exception* System::Data::ExceptionBuilder::CannotSetMaxLength2(::System::Data::DataColumn* column) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CannotSetMaxLength2", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, column);
}
inline ::System::Exception* System::Data::ExceptionBuilder::CannotSetSimpleContentType(::StringW columnName, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(),
                                                                                         { "CannotSetSimpleContentType", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, columnName, type);
}
inline ::System::Exception* System::Data::ExceptionBuilder::CannotSetSimpleContent(::StringW columnName, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CannotSetSimpleContent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, columnName, type);
}
inline ::System::Exception* System::Data::ExceptionBuilder::CannotChangeNamespace(::StringW columnName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CannotChangeNamespace", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, columnName);
}
inline ::System::Exception* System::Data::ExceptionBuilder::HasToBeStringType(::System::Data::DataColumn* column) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "HasToBeStringType", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, column);
}
inline ::System::Exception* System::Data::ExceptionBuilder::AutoIncrementCannotSetIfHasData(::StringW typeName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "AutoIncrementCannotSetIfHasData", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, typeName);
}
inline ::System::Exception* System::Data::ExceptionBuilder::INullableUDTwithoutStaticNull(::StringW typeName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "INullableUDTwithoutStaticNull", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, typeName);
}
inline ::System::Exception* System::Data::ExceptionBuilder::IComparableNotImplemented(::StringW typeName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "IComparableNotImplemented", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, typeName);
}
inline ::System::Exception* System::Data::ExceptionBuilder::UDTImplementsIChangeTrackingButnotIRevertible(::StringW typeName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "UDTImplementsIChangeTrackingButnotIRevertible", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, typeName);
}
inline ::System::Exception* System::Data::ExceptionBuilder::InvalidDataColumnMapping(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "InvalidDataColumnMapping", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, type);
}
inline ::System::Exception* System::Data::ExceptionBuilder::CannotSetDateTimeModeForNonDateTimeColumns() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CannotSetDateTimeModeForNonDateTimeColumns", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::InvalidDateTimeMode(::System::Data::DataSetDateTime mode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "InvalidDateTimeMode", {}, { ::i2c::type_of<::System::Data::DataSetDateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, mode);
}
inline ::System::Exception* System::Data::ExceptionBuilder::CantChangeDateTimeMode(::System::Data::DataSetDateTime oldValue, ::System::Data::DataSetDateTime newValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(),
                                              { "CantChangeDateTimeMode", {}, { ::i2c::type_of<::System::Data::DataSetDateTime>(), ::i2c::type_of<::System::Data::DataSetDateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, oldValue, newValue);
}
inline ::System::Exception* System::Data::ExceptionBuilder::ColumnTypeNotSupported() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ColumnTypeNotSupported", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::SetFailed(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "SetFailed", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, name);
}
inline ::System::Exception* System::Data::ExceptionBuilder::CanNotUse() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CanNotUse", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::SetIListObject() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "SetIListObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::AddNewNotAllowNull() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "AddNewNotAllowNull", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::NotOpen() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "NotOpen", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::CreateChildView() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CreateChildView", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::CanNotDelete() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CanNotDelete", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::GetElementIndex(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "GetElementIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, index);
}
inline ::System::Exception* System::Data::ExceptionBuilder::AddExternalObject() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "AddExternalObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::CanNotClear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CanNotClear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::InsertExternalObject() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "InsertExternalObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::RemoveExternalObject() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RemoveExternalObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::KeyTableMismatch() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "KeyTableMismatch", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::KeyNoColumns() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "KeyNoColumns", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::KeyTooManyColumns(int32_t cols) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "KeyTooManyColumns", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, cols);
}
inline ::System::Exception* System::Data::ExceptionBuilder::KeyDuplicateColumns(::StringW columnName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "KeyDuplicateColumns", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, columnName);
}
inline ::System::Exception* System::Data::ExceptionBuilder::RelationDataSetMismatch() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RelationDataSetMismatch", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::ColumnsTypeMismatch() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ColumnsTypeMismatch", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::KeyLengthMismatch() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "KeyLengthMismatch", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::KeyLengthZero() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "KeyLengthZero", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::ForeignRelation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ForeignRelation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::KeyColumnsIdentical() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "KeyColumnsIdentical", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::RelationForeignTable(::StringW t1, ::StringW t2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RelationForeignTable", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, t1, t2);
}
inline ::System::Exception* System::Data::ExceptionBuilder::GetParentRowTableMismatch(::StringW t1, ::StringW t2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "GetParentRowTableMismatch", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, t1, t2);
}
inline ::System::Exception* System::Data::ExceptionBuilder::SetParentRowTableMismatch(::StringW t1, ::StringW t2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "SetParentRowTableMismatch", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, t1, t2);
}
inline ::System::Exception* System::Data::ExceptionBuilder::RelationForeignRow() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RelationForeignRow", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::RelationNestedReadOnly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RelationNestedReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::TableCantBeNestedInTwoTables(::StringW tableName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "TableCantBeNestedInTwoTables", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, tableName);
}
inline ::System::Exception* System::Data::ExceptionBuilder::LoopInNestedRelations(::StringW tableName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "LoopInNestedRelations", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, tableName);
}
inline ::System::Exception* System::Data::ExceptionBuilder::RelationDoesNotExist() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RelationDoesNotExist", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::ParentOrChildColumnsDoNotHaveDataSet() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ParentOrChildColumnsDoNotHaveDataSet", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::InValidNestedRelation(::StringW childTableName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "InValidNestedRelation", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, childTableName);
}
inline ::System::Exception* System::Data::ExceptionBuilder::InvalidParentNamespaceinNestedRelation(::StringW childTableName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "InvalidParentNamespaceinNestedRelation", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, childTableName);
}
inline ::System::Exception* System::Data::ExceptionBuilder::RowNotInTheDataSet() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RowNotInTheDataSet", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::RowNotInTheTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RowNotInTheTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::EditInRowChanging() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "EditInRowChanging", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::EndEditInRowChanging() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "EndEditInRowChanging", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::BeginEditInRowChanging() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "BeginEditInRowChanging", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::CancelEditInRowChanging() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CancelEditInRowChanging", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::DeleteInRowDeleting() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "DeleteInRowDeleting", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::ValueArrayLength() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ValueArrayLength", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::NoCurrentData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "NoCurrentData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::NoOriginalData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "NoOriginalData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::NoProposedData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "NoProposedData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::RowRemovedFromTheTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RowRemovedFromTheTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::DeletedRowInaccessible() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "DeletedRowInaccessible", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::RowAlreadyDeleted() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RowAlreadyDeleted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::RowEmpty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RowEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::InvalidRowVersion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "InvalidRowVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::RowOutOfRange(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RowOutOfRange", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, index);
}
inline ::System::Exception* System::Data::ExceptionBuilder::RowInsertTwice(int32_t index, ::StringW tableName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RowInsertTwice", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, index, tableName);
}
inline ::System::Exception* System::Data::ExceptionBuilder::RowInsertMissing(::StringW tableName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RowInsertMissing", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, tableName);
}
inline ::System::Exception* System::Data::ExceptionBuilder::RowAlreadyRemoved() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RowAlreadyRemoved", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::MultipleParents() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "MultipleParents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::InvalidRowState(::System::Data::DataRowState state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "InvalidRowState", {}, { ::i2c::type_of<::System::Data::DataRowState>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, state);
}
inline ::System::Exception* System::Data::ExceptionBuilder::InvalidRowBitPattern() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "InvalidRowBitPattern", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::SetDataSetNameToEmpty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "SetDataSetNameToEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::SetDataSetNameConflicting(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "SetDataSetNameConflicting", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, name);
}
inline ::System::Exception* System::Data::ExceptionBuilder::DataSetUnsupportedSchema(::StringW ns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "DataSetUnsupportedSchema", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, ns);
}
inline ::System::Exception* System::Data::ExceptionBuilder::MergeMissingDefinition(::StringW obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "MergeMissingDefinition", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, obj);
}
inline ::System::Exception* System::Data::ExceptionBuilder::TablesInDifferentSets() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "TablesInDifferentSets", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::RelationAlreadyExists() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RelationAlreadyExists", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::RowAlreadyInOtherCollection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RowAlreadyInOtherCollection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::RowAlreadyInTheCollection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RowAlreadyInTheCollection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::RecordStateRange() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RecordStateRange", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::IndexKeyLength(int32_t length, int32_t keyLength) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "IndexKeyLength", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, length, keyLength);
}
inline ::System::Exception* System::Data::ExceptionBuilder::RemovePrimaryKey(::System::Data::DataTable* table) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RemovePrimaryKey", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, table);
}
inline ::System::Exception* System::Data::ExceptionBuilder::RelationAlreadyInOtherDataSet() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RelationAlreadyInOtherDataSet", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::RelationAlreadyInTheDataSet() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RelationAlreadyInTheDataSet", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::RelationNotInTheDataSet(::StringW relation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RelationNotInTheDataSet", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, relation);
}
inline ::System::Exception* System::Data::ExceptionBuilder::RelationOutOfRange(::System::Object* index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RelationOutOfRange", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, index);
}
inline ::System::Exception* System::Data::ExceptionBuilder::DuplicateRelation(::StringW relation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "DuplicateRelation", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, relation);
}
inline ::System::Exception* System::Data::ExceptionBuilder::RelationTableNull() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RelationTableNull", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::RelationDataSetNull() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RelationDataSetNull", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::RelationTableWasRemoved() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RelationTableWasRemoved", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::ParentTableMismatch() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ParentTableMismatch", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::ChildTableMismatch() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ChildTableMismatch", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::EnforceConstraint() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "EnforceConstraint", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::CaseLocaleMismatch() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CaseLocaleMismatch", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::CannotChangeCaseLocale() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CannotChangeCaseLocale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::CannotChangeCaseLocale(::System::Exception* innerException) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CannotChangeCaseLocale", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, innerException);
}
inline ::System::Exception* System::Data::ExceptionBuilder::InvalidRemotingFormat(::System::Data::SerializationFormat mode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "InvalidRemotingFormat", {}, { ::i2c::type_of<::System::Data::SerializationFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, mode);
}
inline ::System::Exception* System::Data::ExceptionBuilder::TableForeignPrimaryKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "TableForeignPrimaryKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::TableCannotAddToSimpleContent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "TableCannotAddToSimpleContent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::NoTableName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "NoTableName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::MultipleTextOnlyColumns() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "MultipleTextOnlyColumns", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::InvalidSortString(::StringW sort) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "InvalidSortString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, sort);
}
inline ::System::Exception* System::Data::ExceptionBuilder::DuplicateTableName(::StringW table) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "DuplicateTableName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, table);
}
inline ::System::Exception* System::Data::ExceptionBuilder::DuplicateTableName2(::StringW table, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "DuplicateTableName2", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, table, ns);
}
inline ::System::Exception* System::Data::ExceptionBuilder::SelfnestedDatasetConflictingName(::StringW table) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "SelfnestedDatasetConflictingName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, table);
}
inline ::System::Exception* System::Data::ExceptionBuilder::DatasetConflictingName(::StringW table) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "DatasetConflictingName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, table);
}
inline ::System::Exception* System::Data::ExceptionBuilder::TableAlreadyInOtherDataSet() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "TableAlreadyInOtherDataSet", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::TableAlreadyInTheDataSet() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "TableAlreadyInTheDataSet", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::TableOutOfRange(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "TableOutOfRange", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, index);
}
inline ::System::Exception* System::Data::ExceptionBuilder::TableNotInTheDataSet(::StringW table) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "TableNotInTheDataSet", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, table);
}
inline ::System::Exception* System::Data::ExceptionBuilder::TableInRelation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "TableInRelation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::TableInConstraint(::System::Data::DataTable* table, ::System::Data::Constraint* constraint) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(),
                                                           { "TableInConstraint", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::System::Data::Constraint*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, table, constraint);
}
inline ::System::Exception* System::Data::ExceptionBuilder::CanNotSerializeDataTableHierarchy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CanNotSerializeDataTableHierarchy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::CanNotRemoteDataTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CanNotRemoteDataTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::CanNotSetRemotingFormat() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CanNotSetRemotingFormat", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::CanNotSerializeDataTableWithEmptyName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CanNotSerializeDataTableWithEmptyName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::TableNotFound(::StringW tableName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "TableNotFound", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, tableName);
}
inline ::System::Exception* System::Data::ExceptionBuilder::AggregateException(::System::Data::AggregateType aggregateType, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "AggregateException", {}, { ::i2c::type_of<::System::Data::AggregateType>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, aggregateType, type);
}
inline ::System::Exception* System::Data::ExceptionBuilder::InvalidStorageType(::System::TypeCode typecode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "InvalidStorageType", {}, { ::i2c::type_of<::System::TypeCode>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, typecode);
}
inline ::System::Exception* System::Data::ExceptionBuilder::RangeArgument(int32_t min, int32_t max) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RangeArgument", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, min, max);
}
inline ::System::Exception* System::Data::ExceptionBuilder::NullRange() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "NullRange", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::NegativeMinimumCapacity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "NegativeMinimumCapacity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::ProblematicChars(char16_t charValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ProblematicChars", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, charValue);
}
inline ::System::Exception* System::Data::ExceptionBuilder::StorageSetFailed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "StorageSetFailed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::SimpleTypeNotSupported() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "SimpleTypeNotSupported", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::MissingAttribute(::StringW attribute) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "MissingAttribute", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, attribute);
}
inline ::System::Exception* System::Data::ExceptionBuilder::MissingAttribute(::StringW element, ::StringW attribute) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "MissingAttribute", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, element, attribute);
}
inline ::System::Exception* System::Data::ExceptionBuilder::InvalidAttributeValue(::StringW name, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "InvalidAttributeValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, name, value);
}
inline ::System::Exception* System::Data::ExceptionBuilder::AttributeValues(::StringW name, ::StringW value1, ::StringW value2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "AttributeValues", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, name, value1, value2);
}
inline ::System::Exception* System::Data::ExceptionBuilder::ElementTypeNotFound(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ElementTypeNotFound", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, name);
}
inline ::System::Exception* System::Data::ExceptionBuilder::RelationParentNameMissing(::StringW rel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RelationParentNameMissing", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, rel);
}
inline ::System::Exception* System::Data::ExceptionBuilder::RelationChildNameMissing(::StringW rel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RelationChildNameMissing", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, rel);
}
inline ::System::Exception* System::Data::ExceptionBuilder::RelationTableKeyMissing(::StringW rel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RelationTableKeyMissing", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, rel);
}
inline ::System::Exception* System::Data::ExceptionBuilder::RelationChildKeyMissing(::StringW rel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "RelationChildKeyMissing", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, rel);
}
inline ::System::Exception* System::Data::ExceptionBuilder::UndefinedDatatype(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "UndefinedDatatype", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, name);
}
inline ::System::Exception* System::Data::ExceptionBuilder::DatatypeNotDefined() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "DatatypeNotDefined", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::MismatchKeyLength() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "MismatchKeyLength", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::InvalidField(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "InvalidField", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, name);
}
inline ::System::Exception* System::Data::ExceptionBuilder::InvalidSelector(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "InvalidSelector", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, name);
}
inline ::System::Exception* System::Data::ExceptionBuilder::CircularComplexType(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CircularComplexType", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, name);
}
inline ::System::Exception* System::Data::ExceptionBuilder::CannotInstantiateAbstract(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CannotInstantiateAbstract", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, name);
}
inline ::System::Exception* System::Data::ExceptionBuilder::InvalidKey(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "InvalidKey", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, name);
}
inline ::System::Exception* System::Data::ExceptionBuilder::DiffgramMissingTable(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "DiffgramMissingTable", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, name);
}
inline ::System::Exception* System::Data::ExceptionBuilder::DiffgramMissingSQL() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "DiffgramMissingSQL", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::DuplicateConstraintRead(::StringW str) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "DuplicateConstraintRead", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, str);
}
inline ::System::Exception* System::Data::ExceptionBuilder::ColumnTypeConflict(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ColumnTypeConflict", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, name);
}
inline ::System::Exception* System::Data::ExceptionBuilder::CannotConvert(::StringW name, ::StringW type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CannotConvert", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, name, type);
}
inline ::System::Exception* System::Data::ExceptionBuilder::MissingRefer(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "MissingRefer", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, name);
}
inline ::System::Exception* System::Data::ExceptionBuilder::InvalidPrefix(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "InvalidPrefix", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, name);
}
inline ::System::Exception* System::Data::ExceptionBuilder::CanNotDeserializeObjectType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "CanNotDeserializeObjectType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::IsDataSetAttributeMissingInSchema() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "IsDataSetAttributeMissingInSchema", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::TooManyIsDataSetAtributeInSchema() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "TooManyIsDataSetAtributeInSchema", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::NestedCircular(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "NestedCircular", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, name);
}
inline ::System::Exception* System::Data::ExceptionBuilder::MultipleParentRows(::StringW tableQName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "MultipleParentRows", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, tableQName);
}
inline ::System::Exception* System::Data::ExceptionBuilder::PolymorphismNotSupported(::StringW typeName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "PolymorphismNotSupported", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, typeName);
}
inline ::System::Exception* System::Data::ExceptionBuilder::DataTableInferenceNotSupported() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "DataTableInferenceNotSupported", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline void System::Data::ExceptionBuilder::ThrowMultipleTargetConverter(::System::Exception* innerException) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ThrowMultipleTargetConverter", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, innerException);
}
inline ::System::Exception* System::Data::ExceptionBuilder::DuplicateDeclaration(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "DuplicateDeclaration", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, name);
}
inline ::System::Exception* System::Data::ExceptionBuilder::FoundEntity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "FoundEntity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExceptionBuilder::MergeFailed(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "MergeFailed", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, name);
}
inline ::System::Exception* System::Data::ExceptionBuilder::ConvertFailed(::System::Type* type1, ::System::Type* type2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "ConvertFailed", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, type1, type2);
}
inline ::System::Exception* System::Data::ExceptionBuilder::InvalidDuplicateNamedSimpleTypeDelaration(::StringW stName, ::StringW errorStr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "InvalidDuplicateNamedSimpleTypeDelaration", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, stName, errorStr);
}
inline ::System::Exception* System::Data::ExceptionBuilder::InternalRBTreeError(::System::Data::RBTreeError internalError) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "InternalRBTreeError", {}, { ::i2c::type_of<::System::Data::RBTreeError>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, internalError);
}
inline ::System::Exception* System::Data::ExceptionBuilder::EnumeratorModified() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExceptionBuilder*>(), { "EnumeratorModified", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Data::ExceptionBuilder::ExceptionBuilder() {}
