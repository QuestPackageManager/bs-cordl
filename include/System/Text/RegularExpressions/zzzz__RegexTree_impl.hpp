#pragma once
#include "System/Text/RegularExpressions/zzzz__RegexOptions_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexTree_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexNode_def.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexOptions_def.hpp"
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexTree._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexTree::*)(
    ::System::Text::RegularExpressions::RegexNode*, ::System::Collections::Hashtable*, ::ArrayW<int32_t, ::Array<int32_t>*>, int32_t, ::System::Collections::Hashtable*,
    ::ArrayW<::StringW, ::Array<::StringW>*>, ::System::Text::RegularExpressions::RegexOptions)>(&::System::Text::RegularExpressions::RegexTree::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2e97e20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexTree*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::RegexNode*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::RegexOptions>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Text::RegularExpressions::RegexNode*& System::Text::RegularExpressions::RegexTree::__cordl_internal_get_Root() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Root;
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::RegexNode*> const& System::Text::RegularExpressions::RegexTree::__cordl_internal_get_Root() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Root;
}
constexpr void System::Text::RegularExpressions::RegexTree::__cordl_internal_set_Root(::System::Text::RegularExpressions::RegexNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Root)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Hashtable*& System::Text::RegularExpressions::RegexTree::__cordl_internal_get_Caps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Caps;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& System::Text::RegularExpressions::RegexTree::__cordl_internal_get_Caps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Caps;
}
constexpr void System::Text::RegularExpressions::RegexTree::__cordl_internal_set_Caps(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Caps)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& System::Text::RegularExpressions::RegexTree::__cordl_internal_get_CapNumList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CapNumList;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& System::Text::RegularExpressions::RegexTree::__cordl_internal_get_CapNumList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CapNumList;
}
constexpr void System::Text::RegularExpressions::RegexTree::__cordl_internal_set_CapNumList(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CapNumList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& System::Text::RegularExpressions::RegexTree::__cordl_internal_get_CapNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CapNames;
}
constexpr void System::Text::RegularExpressions::RegexTree::__cordl_internal_set_CapNames(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CapNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& System::Text::RegularExpressions::RegexTree::__cordl_internal_get_CapsList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CapsList;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& System::Text::RegularExpressions::RegexTree::__cordl_internal_get_CapsList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CapsList;
}
constexpr void System::Text::RegularExpressions::RegexTree::__cordl_internal_set_CapsList(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CapsList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
inline ::System::Text::RegularExpressions::RegexTree* System::Text::RegularExpressions::RegexTree::New_ctor(::System::Text::RegularExpressions::RegexNode* root, ::System::Collections::Hashtable* caps,
                                                                                                            ::ArrayW<int32_t, ::Array<int32_t>*> capNumList, int32_t capTop,
                                                                                                            ::System::Collections::Hashtable* capNames,
                                                                                                            ::ArrayW<::StringW, ::Array<::StringW>*> capsList,
                                                                                                            ::System::Text::RegularExpressions::RegexOptions options) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Text::RegularExpressions::RegexTree*>(root, caps, capNumList, capTop, capNames, capsList, options));
}
inline void System::Text::RegularExpressions::RegexTree::_ctor(::System::Text::RegularExpressions::RegexNode* root, ::System::Collections::Hashtable* caps,
                                                               ::ArrayW<int32_t, ::Array<int32_t>*> capNumList, int32_t capTop, ::System::Collections::Hashtable* capNames,
                                                               ::ArrayW<::StringW, ::Array<::StringW>*> capsList, ::System::Text::RegularExpressions::RegexOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexTree*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::RegexNode*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::RegexOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, root, caps, capNumList, capTop, capNames, capsList, options);
}
// Ctor Parameters []
constexpr ::System::Text::RegularExpressions::RegexTree::RegexTree() {}
