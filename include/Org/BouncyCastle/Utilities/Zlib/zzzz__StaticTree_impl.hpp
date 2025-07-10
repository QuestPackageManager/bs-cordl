#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/Zlib/StaticTree.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Utilities/Zlib/zzzz__StaticTree_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::StaticTree._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::StaticTree::*)(
    ::ArrayW<int16_t, ::Array<int16_t>*>, ::ArrayW<int32_t, ::Array<int32_t>*>, int32_t, int32_t, int32_t)>(&::Org::BouncyCastle::Utilities::Zlib::StaticTree::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x25e2c10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::StaticTree*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int16_t, ::Array<int16_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int16_t, ::Array<int16_t>*>& Org::BouncyCastle::Utilities::Zlib::StaticTree::__cordl_internal_get_static_tree() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___static_tree;
}
constexpr ::ArrayW<int16_t, ::Array<int16_t>*> const& Org::BouncyCastle::Utilities::Zlib::StaticTree::__cordl_internal_get_static_tree() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___static_tree;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::StaticTree::__cordl_internal_set_static_tree(::ArrayW<int16_t, ::Array<int16_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___static_tree)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& Org::BouncyCastle::Utilities::Zlib::StaticTree::__cordl_internal_get_extra_bits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extra_bits;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& Org::BouncyCastle::Utilities::Zlib::StaticTree::__cordl_internal_get_extra_bits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extra_bits;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::StaticTree::__cordl_internal_set_extra_bits(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___extra_bits)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::StaticTree::__cordl_internal_get_extra_base() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extra_base;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::StaticTree::__cordl_internal_get_extra_base() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extra_base;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::StaticTree::__cordl_internal_set_extra_base(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___extra_base = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::StaticTree::__cordl_internal_get_elems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elems;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::StaticTree::__cordl_internal_get_elems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elems;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::StaticTree::__cordl_internal_set_elems(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___elems = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::StaticTree::__cordl_internal_get_max_length() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max_length;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::StaticTree::__cordl_internal_get_max_length() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max_length;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::StaticTree::__cordl_internal_set_max_length(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___max_length = value;
}
inline void Org::BouncyCastle::Utilities::Zlib::StaticTree::setStaticF_static_ltree(::ArrayW<int16_t, ::Array<int16_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<int16_t, ::Array<int16_t>*>, "static_ltree",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::StaticTree*>::get>(
      std::forward<::ArrayW<int16_t, ::Array<int16_t>*>>(value));
}
inline ::ArrayW<int16_t, ::Array<int16_t>*> Org::BouncyCastle::Utilities::Zlib::StaticTree::getStaticF_static_ltree() {
  return ::cordl_internals::getStaticField<::ArrayW<int16_t, ::Array<int16_t>*>, "static_ltree",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::StaticTree*>::get>();
}
inline void Org::BouncyCastle::Utilities::Zlib::StaticTree::setStaticF_static_dtree(::ArrayW<int16_t, ::Array<int16_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<int16_t, ::Array<int16_t>*>, "static_dtree",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::StaticTree*>::get>(
      std::forward<::ArrayW<int16_t, ::Array<int16_t>*>>(value));
}
inline ::ArrayW<int16_t, ::Array<int16_t>*> Org::BouncyCastle::Utilities::Zlib::StaticTree::getStaticF_static_dtree() {
  return ::cordl_internals::getStaticField<::ArrayW<int16_t, ::Array<int16_t>*>, "static_dtree",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::StaticTree*>::get>();
}
inline void Org::BouncyCastle::Utilities::Zlib::StaticTree::setStaticF_static_l_desc(::Org::BouncyCastle::Utilities::Zlib::StaticTree* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Utilities::Zlib::StaticTree*, "static_l_desc",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::StaticTree*>::get>(
      std::forward<::Org::BouncyCastle::Utilities::Zlib::StaticTree*>(value));
}
inline ::Org::BouncyCastle::Utilities::Zlib::StaticTree* Org::BouncyCastle::Utilities::Zlib::StaticTree::getStaticF_static_l_desc() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Utilities::Zlib::StaticTree*, "static_l_desc",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::StaticTree*>::get>();
}
inline void Org::BouncyCastle::Utilities::Zlib::StaticTree::setStaticF_static_d_desc(::Org::BouncyCastle::Utilities::Zlib::StaticTree* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Utilities::Zlib::StaticTree*, "static_d_desc",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::StaticTree*>::get>(
      std::forward<::Org::BouncyCastle::Utilities::Zlib::StaticTree*>(value));
}
inline ::Org::BouncyCastle::Utilities::Zlib::StaticTree* Org::BouncyCastle::Utilities::Zlib::StaticTree::getStaticF_static_d_desc() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Utilities::Zlib::StaticTree*, "static_d_desc",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::StaticTree*>::get>();
}
inline void Org::BouncyCastle::Utilities::Zlib::StaticTree::setStaticF_static_bl_desc(::Org::BouncyCastle::Utilities::Zlib::StaticTree* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Utilities::Zlib::StaticTree*, "static_bl_desc",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::StaticTree*>::get>(
      std::forward<::Org::BouncyCastle::Utilities::Zlib::StaticTree*>(value));
}
inline ::Org::BouncyCastle::Utilities::Zlib::StaticTree* Org::BouncyCastle::Utilities::Zlib::StaticTree::getStaticF_static_bl_desc() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Utilities::Zlib::StaticTree*, "static_bl_desc",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::StaticTree*>::get>();
}
inline void Org::BouncyCastle::Utilities::Zlib::StaticTree::_ctor(::ArrayW<int16_t, ::Array<int16_t>*> static_tree, ::ArrayW<int32_t, ::Array<int32_t>*> extra_bits, int32_t extra_base, int32_t elems,
                                                                  int32_t max_length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::StaticTree*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int16_t, ::Array<int16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, static_tree, extra_bits, extra_base, elems, max_length);
}
inline ::Org::BouncyCastle::Utilities::Zlib::StaticTree* Org::BouncyCastle::Utilities::Zlib::StaticTree::New_ctor(::ArrayW<int16_t, ::Array<int16_t>*> static_tree,
                                                                                                                  ::ArrayW<int32_t, ::Array<int32_t>*> extra_bits, int32_t extra_base, int32_t elems,
                                                                                                                  int32_t max_length) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Utilities::Zlib::StaticTree*>(static_tree, extra_bits, extra_base, elems, max_length));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Utilities::Zlib::StaticTree::StaticTree() {}
