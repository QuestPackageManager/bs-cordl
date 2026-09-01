#pragma once
// IWYU pragma private; include "System\Data\IFilter.hpp"
#include "System/Data/zzzz__IFilter_def.hpp"
#include "System/Data/zzzz__DataRowVersion_def.hpp"
#include "System/Data/zzzz__DataRow_def.hpp"
//  Writing Method size for method: ::System::Data::IFilter.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::IFilter::*)(::System::Data::DataRow*, ::System::Data::DataRowVersion)>(&::System::Data::IFilter::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::IFilter*>(), { ::i2c::class_of<::System::Data::IFilter*>(), 0 }));
    return ___internal_method;
  }
};
inline bool System::Data::IFilter::Invoke(::System::Data::DataRow* row, ::System::Data::DataRowVersion version) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::IFilter*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, row, version);
}
