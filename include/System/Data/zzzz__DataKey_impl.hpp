#pragma once
// IWYU pragma private; include "System\Data\DataKey.hpp"
#include "System/Data/zzzz__DataColumn_impl.hpp"
#include "System/Data/zzzz__DataKey_def.hpp"
#include "System/Data/zzzz__DataColumn_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/Data/zzzz__DataViewRowState_def.hpp"
#include "System/Data/zzzz__IndexField_def.hpp"
#include "System/Data/zzzz__Index_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Data::DataKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataKey::*)(::ArrayW<::System::Data::DataColumn*>, bool)>(&::System::Data::DataKey::_ctor)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x6023cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataKey>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataKey.get_ColumnsReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Data::DataColumn*> (::System::Data::DataKey::*)()>(&::System::Data::DataKey::get_ColumnsReference)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6023f4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataKey>(), { "get_ColumnsReference", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataKey.get_HasValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataKey::*)()>(&::System::Data::DataKey::get_HasValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6023f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataKey>(), { "get_HasValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataKey.get_Table
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataTable* (::System::Data::DataKey::*)()>(&::System::Data::DataKey::get_Table)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6020008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataKey>(), { "get_Table", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataKey.CheckState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataKey::*)()>(&::System::Data::DataKey::CheckState)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6023eb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataKey>(), { "CheckState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataKey.ColumnsEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataKey::*)(::System::Data::DataKey)>(&::System::Data::DataKey::ColumnsEqual)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6023f64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataKey>(), { "ColumnsEqual", {}, { ::i2c::type_of<::System::Data::DataKey>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataKey.ColumnsEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::System::Data::DataColumn*>, ::ArrayW<::System::Data::DataColumn*>)>(&::System::Data::DataKey::ColumnsEqual)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6023f6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataKey>(),
                                                { "ColumnsEqual", {}, { ::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>(), ::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataKey.ContainsColumn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataKey::*)(::System::Data::DataColumn*)>(&::System::Data::DataKey::ContainsColumn)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x60227c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataKey>(), { "ContainsColumn", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataKey.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataKey::*)()>(&::System::Data::DataKey::GetHashCode)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x602405c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataKey>(), { ::i2c::class_of<::System::Data::DataKey>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataKey.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataKey::*)(::System::Object*)>(&::System::Data::DataKey::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x60240c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataKey>(), { ::i2c::class_of<::System::Data::DataKey>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataKey.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataKey::*)(::System::Data::DataKey)>(&::System::Data::DataKey::Equals)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6024140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataKey>(), { "Equals", {}, { ::i2c::type_of<::System::Data::DataKey>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataKey.GetColumnNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Data::DataKey::*)()>(&::System::Data::DataKey::GetColumnNames)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x60241fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataKey>(), { "GetColumnNames", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataKey.GetIndexDesc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Data::IndexField> (::System::Data::DataKey::*)()>(&::System::Data::DataKey::GetIndexDesc)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x60242a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataKey>(), { "GetIndexDesc", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataKey.GetKeyValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Data::DataKey::*)(int32_t)>(&::System::Data::DataKey::GetKeyValues)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6024354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataKey>(), { "GetKeyValues", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataKey.GetSortIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::Index* (::System::Data::DataKey::*)()>(&::System::Data::DataKey::GetSortIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6024464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataKey>(), { "GetSortIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataKey.GetSortIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::Index* (::System::Data::DataKey::*)(::System::Data::DataViewRowState)>(&::System::Data::DataKey::GetSortIndex)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x602446c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataKey>(), { "GetSortIndex", {}, { ::i2c::type_of<::System::Data::DataViewRowState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataKey.RecordsEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataKey::*)(int32_t, int32_t)>(&::System::Data::DataKey::RecordsEqual)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x60244c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataKey>(), { "RecordsEqual", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataKey.ToArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Data::DataColumn*> (::System::Data::DataKey::*)()>(&::System::Data::DataKey::ToArray)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6024548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataKey>(), { "ToArray", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Data::DataKey::_ctor(::ArrayW<::System::Data::DataColumn*> columns, bool copyColumns) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataKey>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, columns, copyColumns);
}
inline ::ArrayW<::System::Data::DataColumn*> System::Data::DataKey::get_ColumnsReference() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataKey>(), { "get_ColumnsReference", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Data::DataColumn*>>(*this, ___internal_method);
}
inline bool System::Data::DataKey::get_HasValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataKey>(), { "get_HasValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::System::Data::DataTable* System::Data::DataKey::get_Table() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataKey>(), { "get_Table", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataTable*>(*this, ___internal_method);
}
inline void System::Data::DataKey::CheckState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataKey>(), { "CheckState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool System::Data::DataKey::ColumnsEqual(::System::Data::DataKey key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataKey>(), { "ColumnsEqual", {}, { ::i2c::type_of<::System::Data::DataKey>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, key);
}
inline bool System::Data::DataKey::ColumnsEqual(::ArrayW<::System::Data::DataColumn*> column1, ::ArrayW<::System::Data::DataColumn*> column2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataKey>(),
                                              { "ColumnsEqual", {}, { ::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>(), ::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, column1, column2);
}
inline bool System::Data::DataKey::ContainsColumn(::System::Data::DataColumn* column) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataKey>(), { "ContainsColumn", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, column);
}
inline int32_t System::Data::DataKey::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataKey>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool System::Data::DataKey::Equals(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataKey>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
inline bool System::Data::DataKey::Equals(::System::Data::DataKey value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataKey>(), { "Equals", {}, { ::i2c::type_of<::System::Data::DataKey>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
inline ::ArrayW<::StringW> System::Data::DataKey::GetColumnNames() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataKey>(), { "GetColumnNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(*this, ___internal_method);
}
inline ::ArrayW<::System::Data::IndexField> System::Data::DataKey::GetIndexDesc() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataKey>(), { "GetIndexDesc", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Data::IndexField>>(*this, ___internal_method);
}
inline ::ArrayW<::System::Object*> System::Data::DataKey::GetKeyValues(int32_t record) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataKey>(), { "GetKeyValues", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(*this, ___internal_method, record);
}
inline ::System::Data::Index* System::Data::DataKey::GetSortIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataKey>(), { "GetSortIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::Index*>(*this, ___internal_method);
}
inline ::System::Data::Index* System::Data::DataKey::GetSortIndex(::System::Data::DataViewRowState recordStates) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataKey>(), { "GetSortIndex", {}, { ::i2c::type_of<::System::Data::DataViewRowState>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::Index*>(*this, ___internal_method, recordStates);
}
inline bool System::Data::DataKey::RecordsEqual(int32_t record1, int32_t record2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataKey>(), { "RecordsEqual", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, record1, record2);
}
inline ::ArrayW<::System::Data::DataColumn*> System::Data::DataKey::ToArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataKey>(), { "ToArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Data::DataColumn*>>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_columns", ty: "::ArrayW<::System::Data::DataColumn*>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Data::DataKey::DataKey(::ArrayW<::System::Data::DataColumn*> _columns) noexcept {
  this->_columns = _columns;
}
// Ctor Parameters []
constexpr ::System::Data::DataKey::DataKey() {}
