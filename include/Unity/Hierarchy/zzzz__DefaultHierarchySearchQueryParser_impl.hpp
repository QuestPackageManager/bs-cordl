#pragma once
// IWYU pragma private; include "Unity\Hierarchy\DefaultHierarchySearchQueryParser.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Hierarchy/zzzz__DefaultHierarchySearchQueryParser_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Regex_def.hpp"
#include "Unity/Hierarchy/zzzz__IHierarchySearchQueryParser_def.hpp"
//  Writing Method size for method: ::Unity::Hierarchy::DefaultHierarchySearchQueryParser._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::DefaultHierarchySearchQueryParser::*)()>(&::Unity::Hierarchy::DefaultHierarchySearchQueryParser::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b3818c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::DefaultHierarchySearchQueryParser*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Hierarchy::DefaultHierarchySearchQueryParser::setStaticF_s_Filter(::System::Text::RegularExpressions::Regex* value) {
  ::cordl_internals::setStaticField<::System::Text::RegularExpressions::Regex*, "s_Filter", ::Unity::Hierarchy::DefaultHierarchySearchQueryParser*>(
      std::forward<::System::Text::RegularExpressions::Regex*>(value));
}
inline ::System::Text::RegularExpressions::Regex* Unity::Hierarchy::DefaultHierarchySearchQueryParser::getStaticF_s_Filter() {
  return ::cordl_internals::getStaticField<::System::Text::RegularExpressions::Regex*, "s_Filter", ::Unity::Hierarchy::DefaultHierarchySearchQueryParser*>();
}
inline void Unity::Hierarchy::DefaultHierarchySearchQueryParser::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::DefaultHierarchySearchQueryParser*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Hierarchy::DefaultHierarchySearchQueryParser* Unity::Hierarchy::DefaultHierarchySearchQueryParser::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Hierarchy::DefaultHierarchySearchQueryParser*>());
}
/// @brief Convert operator to "::Unity::Hierarchy::IHierarchySearchQueryParser"
constexpr Unity::Hierarchy::DefaultHierarchySearchQueryParser::operator ::Unity::Hierarchy::IHierarchySearchQueryParser*() noexcept {
  return static_cast<::Unity::Hierarchy::IHierarchySearchQueryParser*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Hierarchy::IHierarchySearchQueryParser"
constexpr ::Unity::Hierarchy::IHierarchySearchQueryParser* Unity::Hierarchy::DefaultHierarchySearchQueryParser::i___Unity__Hierarchy__IHierarchySearchQueryParser() noexcept {
  return static_cast<::Unity::Hierarchy::IHierarchySearchQueryParser*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::DefaultHierarchySearchQueryParser::DefaultHierarchySearchQueryParser() {}
