#pragma once
// IWYU pragma private; include "System/ITupleInternal.hpp"
#include "System/zzzz__ITupleInternal_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ITuple_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
//  Writing Method size for method: ::System::ITupleInternal.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ITupleInternal::*)(::System::Text::StringBuilder*)>(&::System::ITupleInternal::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ITupleInternal*>(), { ::i2c::class_of<::System::ITupleInternal*>(), 0 }));
    return ___internal_method;
  }
};
inline ::StringW System::ITupleInternal::ToString(::System::Text::StringBuilder* sb) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ITupleInternal*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, sb);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
constexpr System::ITupleInternal::operator ::System::Runtime::CompilerServices::ITuple*() noexcept {
  return static_cast<::System::Runtime::CompilerServices::ITuple*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::CompilerServices::ITuple"
constexpr ::System::Runtime::CompilerServices::ITuple* System::ITupleInternal::i___System__Runtime__CompilerServices__ITuple() noexcept {
  return static_cast<::System::Runtime::CompilerServices::ITuple*>(static_cast<void*>(this));
}
