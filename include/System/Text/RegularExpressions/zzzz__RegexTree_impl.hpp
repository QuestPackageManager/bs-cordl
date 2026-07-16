#pragma once
// IWYU pragma private; include "System/Text/RegularExpressions/RegexTree.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexOptions_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexTree_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexNode_def.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexOptions_def.hpp"
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexTree._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexTree::*)(
    ::System::Text::RegularExpressions::RegexNode*, ::System::Collections::Hashtable*, ::ArrayW<int32_t>, int32_t, ::System::Collections::Hashtable*, ::ArrayW<::StringW>,
    ::System::Text::RegularExpressions::RegexOptions)>(&::System::Text::RegularExpressions::RegexTree::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6389f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexTree*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Text::RegularExpressions::RegexNode*>(), ::i2c::type_of<::System::Collections::Hashtable*>(),
                                                                 ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Hashtable*>(),
                                                                 ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::Text::RegularExpressions::RegexOptions>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Text::RegularExpressions::RegexNode*& System::Text::RegularExpressions::RegexTree::__cordl_internal_get_Root() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Root;
}
constexpr ::System::Text::RegularExpressions::RegexNode* const& System::Text::RegularExpressions::RegexTree::__cordl_internal_get_Root() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Root;
}
constexpr void System::Text::RegularExpressions::RegexTree::__cordl_internal_set_Root(::System::Text::RegularExpressions::RegexNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Root = value;
}
constexpr ::System::Collections::Hashtable*& System::Text::RegularExpressions::RegexTree::__cordl_internal_get_Caps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Caps;
}
constexpr ::System::Collections::Hashtable* const& System::Text::RegularExpressions::RegexTree::__cordl_internal_get_Caps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Caps;
}
constexpr void System::Text::RegularExpressions::RegexTree::__cordl_internal_set_Caps(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Caps = value;
}
constexpr ::ArrayW<int32_t>& System::Text::RegularExpressions::RegexTree::__cordl_internal_get_CapNumList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CapNumList;
}
constexpr ::ArrayW<int32_t> const& System::Text::RegularExpressions::RegexTree::__cordl_internal_get_CapNumList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CapNumList;
}
constexpr void System::Text::RegularExpressions::RegexTree::__cordl_internal_set_CapNumList(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CapNumList = value;
}
constexpr int32_t& System::Text::RegularExpressions::RegexTree::__cordl_internal_get_CapTop() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CapTop;
}
constexpr int32_t const& System::Text::RegularExpressions::RegexTree::__cordl_internal_get_CapTop() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CapTop;
}
constexpr void System::Text::RegularExpressions::RegexTree::__cordl_internal_set_CapTop(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CapTop = value;
}
constexpr ::System::Collections::Hashtable*& System::Text::RegularExpressions::RegexTree::__cordl_internal_get_CapNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CapNames;
}
constexpr ::System::Collections::Hashtable* const& System::Text::RegularExpressions::RegexTree::__cordl_internal_get_CapNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CapNames;
}
constexpr void System::Text::RegularExpressions::RegexTree::__cordl_internal_set_CapNames(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CapNames = value;
}
constexpr ::ArrayW<::StringW>& System::Text::RegularExpressions::RegexTree::__cordl_internal_get_CapsList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CapsList;
}
constexpr ::ArrayW<::StringW> const& System::Text::RegularExpressions::RegexTree::__cordl_internal_get_CapsList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CapsList;
}
constexpr void System::Text::RegularExpressions::RegexTree::__cordl_internal_set_CapsList(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CapsList = value;
}
constexpr ::System::Text::RegularExpressions::RegexOptions& System::Text::RegularExpressions::RegexTree::__cordl_internal_get_Options() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Options;
}
constexpr ::System::Text::RegularExpressions::RegexOptions const& System::Text::RegularExpressions::RegexTree::__cordl_internal_get_Options() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Options;
}
constexpr void System::Text::RegularExpressions::RegexTree::__cordl_internal_set_Options(::System::Text::RegularExpressions::RegexOptions value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Options = value;
}
inline void System::Text::RegularExpressions::RegexTree::_ctor(::System::Text::RegularExpressions::RegexNode* root, ::System::Collections::Hashtable* caps, ::ArrayW<int32_t> capNumList,
                                                               int32_t capTop, ::System::Collections::Hashtable* capNames, ::ArrayW<::StringW> capsList,
                                                               ::System::Text::RegularExpressions::RegexOptions options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexTree*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Text::RegularExpressions::RegexNode*>(), ::i2c::type_of<::System::Collections::Hashtable*>(),
                                                               ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Hashtable*>(),
                                                               ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::Text::RegularExpressions::RegexOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, root, caps, capNumList, capTop, capNames, capsList, options);
}
inline ::System::Text::RegularExpressions::RegexTree* System::Text::RegularExpressions::RegexTree::New_ctor(::System::Text::RegularExpressions::RegexNode* root, ::System::Collections::Hashtable* caps,
                                                                                                            ::ArrayW<int32_t> capNumList, int32_t capTop, ::System::Collections::Hashtable* capNames,
                                                                                                            ::ArrayW<::StringW> capsList, ::System::Text::RegularExpressions::RegexOptions options) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::RegularExpressions::RegexTree*>(root, caps, capNumList, capTop, capNames, capsList, options));
}
// Ctor Parameters []
constexpr ::System::Text::RegularExpressions::RegexTree::RegexTree() {}
