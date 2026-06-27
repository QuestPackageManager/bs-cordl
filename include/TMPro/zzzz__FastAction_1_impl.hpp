#pragma once
// IWYU pragma private; include "TMPro/FastAction_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TMPro/zzzz__FastAction_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
template<typename A>
constexpr ::System::Collections::Generic::LinkedList_1<::System::Action_1<A>*>*& TMPro::FastAction_1<A>::__cordl_internal_get_delegates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delegates;
}
template<typename A>
constexpr ::System::Collections::Generic::LinkedList_1<::System::Action_1<A>*>* const& TMPro::FastAction_1<A>::__cordl_internal_get_delegates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delegates;
}
template<typename A>
constexpr void TMPro::FastAction_1<A>::__cordl_internal_set_delegates(::System::Collections::Generic::LinkedList_1<::System::Action_1<A>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___delegates, value);
}
template<typename A>
constexpr ::System::Collections::Generic::Dictionary_2<::System::Action_1<A>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<A>*>*>*& TMPro::FastAction_1<A>::__cordl_internal_get_lookup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookup;
}
template<typename A>
constexpr ::System::Collections::Generic::Dictionary_2<::System::Action_1<A>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<A>*>*>* const& TMPro::FastAction_1<A>::__cordl_internal_get_lookup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookup;
}
template<typename A>
constexpr void TMPro::FastAction_1<A>::__cordl_internal_set_lookup(::System::Collections::Generic::Dictionary_2<::System::Action_1<A>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<A>*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___lookup, value);
}
template<typename A>
inline void TMPro::FastAction_1<A>::Add(::System::Action_1<A>*  rhs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::FastAction_1<A>*>::get(),
                        "Add",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<A>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rhs);
}
template<typename A>
inline void TMPro::FastAction_1<A>::Remove(::System::Action_1<A>*  rhs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::FastAction_1<A>*>::get(),
                        "Remove",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<A>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rhs);
}
template<typename A>
inline void TMPro::FastAction_1<A>::Call(A  a)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::FastAction_1<A>*>::get(),
                        "Call",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<A>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, a);
}
template<typename A>
inline void TMPro::FastAction_1<A>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::FastAction_1<A>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename A>
inline ::TMPro::FastAction_1<A>* TMPro::FastAction_1<A>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::TMPro::FastAction_1<A>*>());
}
// Ctor Parameters []
template<typename A>
constexpr ::TMPro::FastAction_1<A>::FastAction_1()   {
}
