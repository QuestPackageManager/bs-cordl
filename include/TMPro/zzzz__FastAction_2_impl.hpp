#pragma once
// IWYU pragma private; include "TMPro/FastAction_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TMPro/zzzz__FastAction_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
template<typename A,typename B>
constexpr ::System::Collections::Generic::LinkedList_1<::System::Action_2<A,B>*>*& TMPro::FastAction_2<A,B>::__cordl_internal_get_delegates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delegates;
}
template<typename A,typename B>
constexpr ::System::Collections::Generic::LinkedList_1<::System::Action_2<A,B>*>* const& TMPro::FastAction_2<A,B>::__cordl_internal_get_delegates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delegates;
}
template<typename A,typename B>
constexpr void TMPro::FastAction_2<A,B>::__cordl_internal_set_delegates(::System::Collections::Generic::LinkedList_1<::System::Action_2<A,B>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___delegates, value);
}
template<typename A,typename B>
constexpr ::System::Collections::Generic::Dictionary_2<::System::Action_2<A,B>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_2<A,B>*>*>*& TMPro::FastAction_2<A,B>::__cordl_internal_get_lookup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookup;
}
template<typename A,typename B>
constexpr ::System::Collections::Generic::Dictionary_2<::System::Action_2<A,B>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_2<A,B>*>*>* const& TMPro::FastAction_2<A,B>::__cordl_internal_get_lookup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookup;
}
template<typename A,typename B>
constexpr void TMPro::FastAction_2<A,B>::__cordl_internal_set_lookup(::System::Collections::Generic::Dictionary_2<::System::Action_2<A,B>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_2<A,B>*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___lookup, value);
}
template<typename A,typename B>
inline void TMPro::FastAction_2<A,B>::Add(::System::Action_2<A,B>*  rhs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::FastAction_2<A,B>*>::get(),
                        "Add",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<A,B>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rhs);
}
template<typename A,typename B>
inline void TMPro::FastAction_2<A,B>::Remove(::System::Action_2<A,B>*  rhs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::FastAction_2<A,B>*>::get(),
                        "Remove",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<A,B>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rhs);
}
template<typename A,typename B>
inline void TMPro::FastAction_2<A,B>::Call(A  a, B  b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::FastAction_2<A,B>*>::get(),
                        "Call",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<A>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<B>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, a, b);
}
template<typename A,typename B>
inline void TMPro::FastAction_2<A,B>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::FastAction_2<A,B>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename A,typename B>
inline ::TMPro::FastAction_2<A,B>* TMPro::FastAction_2<A,B>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::TMPro::FastAction_2<A,B>*>());
}
// Ctor Parameters []
template<typename A,typename B>
constexpr ::TMPro::FastAction_2<A,B>::FastAction_2()   {
}
